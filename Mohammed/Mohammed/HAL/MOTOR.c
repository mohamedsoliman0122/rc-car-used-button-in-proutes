
#include "StdTypes.h"
#include "DIO_interface.h"
#include "MOTOR_interface.h"
#include "MOTOR_cfg.h"
#include "MOTOR_private.h"


void MOTOR_stop(MOTOR_type motor)
{
	DIO_Writepin(MOTORPinArray[motor][IN1],LOW);
	DIO_Writepin(MOTORPinArray[motor][IN2],LOW);

}
void MOTOR_cw(MOTOR_type motor)
{
	DIO_Writepin(MOTORPinArray[motor][IN1],HIGH);
	DIO_Writepin(MOTORPinArray[motor][IN2],LOW);

}
void MOTOR_ccw(MOTOR_type motor)
{
	DIO_Writepin(MOTORPinArray[motor][IN1],LOW);
	DIO_Writepin(MOTORPinArray[motor][IN2],HIGH);

}
































