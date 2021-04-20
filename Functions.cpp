//
/*
 * Functions.cpp
 *
 *  Created on: Nov 5, 2017
 *      Author: keith
 */
#include <iostream>
#include <memory>

#include "./includes/Functions.h"
#include "./includes/Smalltalk_American.h"
#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/Smalltalk_Brit.h"
#include "./includes/Watch.h"
#include "./includes/constants.h"
using namespace std;
//create a vector with appropriate numbers of Smalltalk_Brit,Smalltalk_American and ST_American_DonutEnthusiest
//objects using unique pointers.  Since we are using c++11 returning this vector by value is fine since the 
//compiler will move the vector on return rather than recreate it (this means there is no copy penalty)
std::vector<std::unique_ptr<Smalltalk>> getPeople(int numBrit,
		int numAmerican, int numbAmericanDonutEnthusiest,
		int numWatches) {
	
	//create a vector to hold SmallTalk unique pointers
	std::vector<std::unique_ptr<Smalltalk>> peopleList;

		//add brits to vector
	for (int i = 0; i < numBrit; i++) {
		std::unique_ptr<Smalltalk_Brit> Brit(new Smalltalk_Brit(i));
		peopleList.push_back(move(Brit));
	}

		//add americans  to vector
	for (int j = 0; j < numAmerican; j++) {
			std::unique_ptr<Smalltalk_American> Amer(new Smalltalk_American(j));
			peopleList.push_back(move(Amer));
		}

		//add american donut enthusiest  to vector
	for (int k = 0; k < numBrit; k++) {
			std::unique_ptr<ST_American_DonutEnthusiest> DE(new ST_American_DonutEnthusiest(k));
			peopleList.push_back(move(DE));

		}

		//create some watches (as long as number watches <= numb people)
	if ((unsigned)numWatches <= peopleList.size()) {
		int l = 0;
		while (l <= numWatches) {
			std::unique_ptr<Watch> pW(new Watch());
			//pW.getTime();
			//peopleList[l].get()->takeWatch();


			//&pW = Smalltalk::pWatch;//givewatch(&pW);

			l++;

		}

	}
		//then give the watches away to first NUM_WATCHES people in the vector
		// when you are finished using the vector you return
		//from this function(see Smalltalk header for hints)

		//return your vector
	return peopleList;
}
