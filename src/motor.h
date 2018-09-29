/*
 * motor.h
 *
 *  Created on: Sep 22, 2018
 *      Author: Rayden
 */

#ifndef MOTOR_H_
#define MOTOR_H_

class motor {
protected:
	int port;
	bool isReversed;
public:
	motor(int p);
	void setSpeed(double speed);
	void reverse();
};

#endif /* MOTOR_H_ */
