/*
 * robot.cpp
 *
 *  Created on: Sep 22, 2018
 *      Author: Rayden
 */

#include <iostream>
#include "chassis.h"
#include "shooter.h"
using namespace std;

int main(){
	chassis* ch = new chassis(3, 4);
	shooter* sh = new shooter(6);

	ch->moveStraight(1.0);
	ch->wait(3000);
	ch->pointTurn(-0.6);
	ch->wait(500);
	ch->brake();
	sh->shoot();

	return 0;
}



