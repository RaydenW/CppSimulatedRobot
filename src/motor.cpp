/*
 * motor.cpp
 *
 *  Created on: Sep 22, 2018
 *      Author: Rayden
 */

#include "motor.h"
#include <iostream>
using namespace std;

motor::motor(int p)
	:port(p), isReversed(false)
{
}

void motor::setSpeed(double speed){
	if(isReversed)
	{
		std::cout << "speed is: "<< -1*speed << " on port: " << port << std::endl;
	}
	else
	{
		std::cout << "speed is: " << speed << " on port: " << port << std::endl;
	}

}

void motor::reverse(){
	if(isReversed)
	{
		isReversed = false;
	}
	else
	{
		isReversed = true;
	}
}
