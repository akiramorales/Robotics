#pragma config(Motor,  port1,           RightFront,    tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           RightBack,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           LeftFront,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          LeftFront,     tmotorVex393_HBridge, openLoop)

task main()
{
	motor[port1] = vexRT(Ch1);
	motor[port2] = vexRT(Ch1);
	motor[port9] = vexRT(Ch3);
	motor[port10] = vexRT(Ch3);
}
