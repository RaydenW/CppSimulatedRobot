/*
 * smartMotor.cpp
 *
 *  Created on: Sep 22, 2018
 *      Author: Rayden
 */

#include "smartMotor.h"
#include "motor.h"

smartMotor::smartMotor(int p)
	:motor(p), lastSpeed(0)
{
}

double smartMotor::getLastSpeed(){
	return lastSpeed;
}

void smartMotor::setSpeed(double s){
	motor::setSpeed(s);
	lastSpeed = s;
}
