/*
 * Smalltalk.cpp
 *
 *  Created on: Apr 18, 2021
 *      Author: guest-l9gf4s
 */
#include <iostream>
#include "includes/Smalltalk.h"
#include "includes/constants.h"
#include "includes/Watch.h"

using namespace std;


Smalltalk::Smalltalk(string myNationality,int iPerson) : nationality(myNationality), iPerson(iPerson) {
	Smalltalk::current_phrase = 0;


}

Smalltalk::~Smalltalk(void) {
}

std::string Smalltalk::saySomething() {
	if (current_phrase == 0) {
		current_phrase++;
		string one =  iPerson + " ";

		mySmallTalk[current_phrase%2];
		nationality;

		return cout << nationality << "" << one << ": " << mySmallTalk[current_phrase%2]<< endl;
	}

	if (current_phrase == mySmallTalk.size()) {
		current_phrase = 0;
	}
	//current_phrase++;
	//iPerson++;

	return nationality + " " + this->iPerson + ": " + mySmallTalk[current_phrase%2];
}

std::string Smalltalk::getTime() {

	if (pWatch) {
		return THE_CURRENT_TIME_IS + pWatch->getTime();
	}
	else {
		return I_DO_NOT_HAVE_A_WATCH;
	}
}
