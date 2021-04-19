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
#include <memory>

using namespace std;


Smalltalk::Smalltalk(string myNationality,int iPerson) : nationality(myNationality), iPerson(iPerson) {
	Smalltalk::current_phrase = 0;


}

Smalltalk::~Smalltalk(void) {
}

std::string Smalltalk::saySomething() {
	string person =  iPerson + " ";
	if (current_phrase == 0) {
		current_phrase++;

		mySmallTalk[current_phrase%2];

		return  nationality + "" + person + ": " + mySmallTalk[current_phrase%2];
	}

	if ((unsigned)current_phrase == mySmallTalk.size()) {
		current_phrase = 0;
	}
	//current_phrase++;
	//iPerson++;


	return  nationality + "" + person + ": " + mySmallTalk[current_phrase%2];
}

std::string Smalltalk::getTime() {

	if (pWatch) {
		return THE_CURRENT_TIME_IS + pWatch->getTime();
	}
	else {
		return I_DO_NOT_HAVE_A_WATCH;
	}
}

std::unique_ptr<Watch>  Smalltalk::takeWatch() {
	if (pWatch != 0) {
		pWatch.reset();
	}
	return std::unique_ptr<Watch>(nullptr);

}

bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch) {
	if (pWatch == NULL) {
		return false;
	}

	if (pWatch) {
		return false;
	}

	this->pWatch = std::move(pWatch);
	return true;
}

void populatePhrases() {

}

