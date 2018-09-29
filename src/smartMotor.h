/*
 * smartMotor.h
 *
 *  Created on: Sep 22, 2018
 *      Author: Rayden
 */

#ifndef SMARTMOTOR_H_
#define SMARTMOTOR_H_

#include "motor.h"

class smartMotor : public motor{
private:
	double lastSpeed;
public:
	smartMotor(int p);
	double getLastSpeed();
	void setSpeed(double s);
};

#endif /* SMARTMOTOR_H_ */
