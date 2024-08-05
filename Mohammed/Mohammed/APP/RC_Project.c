#include "RC_Project.h"


void car_Forward(void)
{
	MOTOR_cw(F_R);
	MOTOR_cw(F_L);
	MOTOR_cw(B_R);
	MOTOR_cw(B_L);
}

void car_Backward(void)
{
	MOTOR_ccw(F_R);
	MOTOR_ccw(F_L);
	MOTOR_ccw(B_R);
	MOTOR_ccw(B_L);
}

void car_RotatLeft(void)
{
	MOTOR_cw(F_R) ;
	MOTOR_cw(B_R) ;
	MOTOR_ccw(F_L);
	MOTOR_ccw(B_L);
}

void car_RotatRight(void)
{
	MOTOR_ccw(F_R);
	MOTOR_ccw(B_R);
	MOTOR_cw(F_L) ;
	MOTOR_cw(B_L) ;
}
void car_Stop(void)
{
	MOTOR_stop(F_R);
	MOTOR_stop(F_L);
	MOTOR_stop(B_R);
	MOTOR_stop(B_L);
}
