/*
 * Smalltalk_American.cpp
 *
 *  Created on: Nov 2019
 *      Author: Steven Cross
 */
#include "./includes/Smalltalk_American.h"
#include "./includes/constants.h"

Smalltalk_American::Smalltalk_American(int iPerson) :
		Smalltalk(AMERICAN, iPerson) {
	populatePhrases();
}

Smalltalk_American::Smalltalk_American(std::string myNationality, int iPerson) :
		Smalltalk(myNationality, iPerson) {
	populatePhrases();
}

Smalltalk_American::~Smalltalk_American() {
}

void Smalltalk_American::populatePhrases() {
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_1);
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_2);
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_3);
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_4);
	Smalltalk::mySmallTalk.push_back(AMERICAN_PHRASE_5);
}

