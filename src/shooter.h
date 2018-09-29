/*
 * shooter.h
 *
 *  Created on: Sep 22, 2018
 *      Author: Rayden
 */

#ifndef SHOOTER_H_
#define SHOOTER_H_
#include "smartMotor.h"

class shooter{
private:
	smartMotor* shooterMotor;
public:
	shooter(int p);
	~shooter();
	void shoot();
};

#endif /* SHOOTER_H_ */
