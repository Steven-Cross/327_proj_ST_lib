/*
 * Smalltalk_Brit.cpp
 *
 *  Created on: Nov 2019
 *      Author: Steven Cross
 */

#include "./includes/Smalltalk_Brit.h"
#include "./includes/constants.h"

Smalltalk_Brit::Smalltalk_Brit(int iPerson) :
		Smalltalk(BRIT, iPerson) {
	populatePhrases();
}

Smalltalk_Brit::~Smalltalk_Brit() {

}

void Smalltalk_Brit::populatePhrases() {
	Smalltalk::mySmallTalk = { BRIT_1, BRIT_2, BRIT_3, BRIT_4, BRIT_5, BRIT_6,
			BRIT_7 };
}

