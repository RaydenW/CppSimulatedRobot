/*
 * shooter.cpp
 *
 *  Created on: Sep 22, 2018
 *      Author: Rayden
 */

#include "shooter.h"
#include <iostream>
using namespace std;

shooter::shooter(int p)
	:shooterMotor(new smartMotor(p))
{
}

shooter::~shooter() {
	delete shooterMotor;
	shooterMotor = nullptr;
}

void shooter::shoot(){
	std::cout << "Shooting!" << std::endl;
	shooterMotor->setSpeed(1.0);
	shooterMotor->setSpeed(0.0);
}
