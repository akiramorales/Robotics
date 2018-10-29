#pragma config(Sensor, I2C_1,  LeftFlyWheel,   sensorNone)
#pragma config(Sensor, I2C_2,  RightFlyWheel,  sensorNone)
#pragma config(Motor,  port1,           RightFront,    tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           RightBack,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           LeftFlyTop,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           LeftFlyBot,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           RightFlyBot,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           RightFlyTop,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           LeftBack,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          LeftFront,     tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma platform(VEX2)
#pragma competitionControl(Competition)

#include "Vex_Competition_Includes.c"

bool fly = true;

void pre_auton()
{
  bStopTasksBetweenModes = true;
}

task autonomous()
{

}

task usercontrol()
{
  while (true)
  {
		motor[port1] = vexRT(Ch1);
		motor[port2] = vexRT(Ch1);
		motor[port9] = vexRT(Ch3);
		motor[port10] = vexRT(Ch3);
		if(vexRT(Btn5D) == 1){
			fly = !fly;
		}
		motor[RightFlyTop] = fly ? 127 : 0;
		motor[LeftFlyTop] = fly ? 127 : 0;
//		motor[RightFlyBot] = fly ? 127 : 0;
	//	motor[LeftFlyBot] = fly ? 127 : 0;
  }
}
