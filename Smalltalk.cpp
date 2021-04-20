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
	std::string something =  mySmallTalk[current_phrase];


	current_phrase++;

	if ((unsigned)current_phrase == mySmallTalk.size()) {
		current_phrase = 0;
	}

	return something;



}

std::string Smalltalk::getTime() {

	if (pWatch != 0) {
		return THE_CURRENT_TIME_IS + pWatch->getTime();
	}
	else {
		return I_DO_NOT_HAVE_A_WATCH;
	}
}

std::unique_ptr<Watch>  Smalltalk::takeWatch() {
	if (pWatch != 0) {
		return std::move(pWatch);
	}
	return std::unique_ptr<Watch>(nullptr);
}

bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch) {
	if (pWatch == NULL) {
		return false;
	}

	if (pWatch == 0) {
		return false;
	}

	this->pWatch = std::move(pWatch);
	return true;
}

void populatePhrases() {

}

