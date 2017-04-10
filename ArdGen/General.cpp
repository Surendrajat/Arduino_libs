/*
 * General.cpp
 *
 *  Created on: 10-Apr-2017
 *      Author: sonu
 */

#include "General.h"

General::General() {}

General::~General() {}

void General::digitalWriteArray(int pins[], int vals[]){
	for (int i = 0; i < sizeof(pins)/sizeof(int); ++i){
		digitalWrite(pins[i], vals[i]);
	}
}
//hello