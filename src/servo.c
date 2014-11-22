#pragma config(Hubs,  S1, HTMotor,  HTServo,  none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,      ,             tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,      ,             tmotorTetrix, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(true)
	{
		if(nNxtButtonPressed==kLeftButton)
		{
			servo[servo1] = 255;
			servo[servo2] = 0;
		}
		else if(nNxtButtonPressed==kRightButton)
		{
			servo[servo1] = 0;
			servo[servo2] = 255;
		}
		else if(nNxtButtonPressed==kEnterButton)
		{
			servo[servo1] = 127;
			servo[servo2] = 127;
		}
	}
}
