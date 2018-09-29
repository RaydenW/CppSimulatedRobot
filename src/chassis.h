/*
 * chassis.h
 *
 *  Created on: Sep 22, 2018
 *      Author: Rayden
 */

#ifndef CHASSIS_H_
#define CHASSIS_H_
#include "motor.h"

class chassis {
private:
	motor* leftWheels;
	motor* rightWheels;
public:
	chassis(int p1, int p2);
	~chassis();
	void moveStraight(double s);
	void pointTurn(double s);
	void brake();
	void wait(int ms);
};

#endif /* CHASSIS_H_ */
