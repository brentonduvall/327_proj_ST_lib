/*
 * ST_American_DonutEnthusiest.cpp
 *
 *  Created on: Apr 18, 2021
 *      Author: guest-l9gf4s
 */
#include "includes/ST_American_DonutEnthusiest.h"
#include "includes/Smalltalk.h"
#include "includes/constants.h"

ST_American_DonutEnthusiest::ST_American_DonutEnthusiest(int i) : Smalltalk_American(AMERICAN_DE, iPerson) {
	populatePhrases();
}

ST_American_DonutEnthusiest::~ST_American_DonutEnthusiest(void) {
	populatePhrases();

}

void ST_American_DonutEnthusiest::populatePhrases() {
	Smalltalk::mySmallTalk.push_back(AMERICAN_DE_PHRASE_1);
	Smalltalk::mySmallTalk.push_back(AMERICAN_DE_PHRASE_2);
	Smalltalk::mySmallTalk.push_back(AMERICAN_DE_PHRASE_3);
	Smalltalk::mySmallTalk.push_back(AMERICAN_DE_PHRASE_4);
	Smalltalk::mySmallTalk.push_back(AMERICAN_DE_PHRASE_5);
}



