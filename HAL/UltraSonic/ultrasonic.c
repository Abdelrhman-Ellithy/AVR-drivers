#include "ultrasonic.h"


static volatile u16 t1,t2,flag=0,c=0;


void ULTRASONIC_Init(void)
{
	/****you can use timer in another mode except modes using ICR as top put take care dont reset timer****/
	Timer1_Init_PostBuild(TIMER1_NORMAL_MODE,TIMER1_SCALER_8,OCRA_DISCONNECTED,OCRB_DISCONNECTED);
	Timer1_OVF_SetCallBack(Func_OVF);
	Timer1_ICU_SetCallBack(Func_ICU);
	
}

u8 ULTRASONIC_GetDistance(ULTRASONIC_t *ultrasonic)
{
	u8 distance;
	u16 time;
	c=0;
	flag=0;
	GPIO_PIN_WRITE(ultrasonic->ULTRASonic_PORT, ultrasonic->ULTRASONIC_PIN, GPIO_PIN_HIGH);
	_delay_us(10);
	GPIO_PIN_WRITE(ultrasonic->ULTRASonic_PORT, ultrasonic->ULTRASONIC_PIN, GPIO_PIN_LOW);
	Timer1_InputCaptureEdge(RISING);
	Timer1_ICU_InterruptEnable();
	Timer1_OVF_InterruptEnable();
	while (flag<2);
	time=(t2+((u32)c*65535))-t1;
	distance=time/58;
	Timer1_ICU_InterruptDisable();
	Timer1_OVF_InterruptEnable();
	return distance;
	
}

void ULTRASONIC_Start(ULTRASONIC_t *ultrasonic)
{
	if(flag==0)
	{
	GPIO_PIN_WRITE(ultrasonic->ULTRASonic_PORT, ultrasonic->ULTRASONIC_PIN, GPIO_PIN_HIGH);
	_delay_us(10);
	GPIO_PIN_WRITE(ultrasonic->ULTRASonic_PORT, ultrasonic->ULTRASONIC_PIN, GPIO_PIN_LOW);
		Timer1_InputCaptureEdge(RISING);
		Timer1_ICU_InterruptEnable();
		Timer1_OVF_InterruptEnable();
	}
	
}
u8 ULTRASONIC_GetDistancePeriodic(u8*Pdistance)
{
	u8 distance;
	u16 time;
	if (flag==2)
	{
		time=(t2+((u32)c*65535))-t1;
		distance=time/58;
		*Pdistance=distance;
		Timer1_OVF_InterruptEnable();
		flag=0;
		return 1;
	}
	return 0;
}


static void Func_ICU(void)
{
	if(flag==0)
	{
		c=0;
		t1=getICRValue();
		flag=1;
		Timer1_InputCaptureEdge(FALLING);
	}
	else if (flag==1)
	{
		t2=getICRValue();
		flag=2;
		Timer1_InputCaptureEdge(RISING);
		Timer1_OVF_InterruptDisable();
		Timer1_ICU_InterruptDisable();
	}
}

static void Func_OVF(void)
{
	c++;
}