/*
 * chassis.cpp
 *
 *  Created on: Sep 22, 2018
 *      Author: Rayden
 */

#include "chassis.h"
#include <iostream>
using namespace std;

chassis::chassis(int p1, int p2)
	:leftWheels(new motor(p1)), rightWheels(new motor(p2))
{
	rightWheels->reverse();
}

chassis::~chassis(){
	delete leftWheels;
	delete rightWheels;
	leftWheels = nullptr;
	rightWheels = nullptr;

}

void chassis::moveStraight(double s){
	rightWheels->setSpeed(s);
	leftWheels->setSpeed(s);
}

void chassis::pointTurn(double s){
	rightWheels->setSpeed(s);
	leftWheels->setSpeed(-s);
}

void chassis::brake(){
	rightWheels->setSpeed(0);
	leftWheels->setSpeed(0);
}

void chassis::wait(int ms){
	std::cout << "Waiting for " << ms/1000.0 << " seconds" << std::endl;
}
