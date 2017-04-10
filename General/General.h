/*
 * General.h
 *
 *  Created on: 10-Apr-2017
 *      Author: sonu
 */

#ifndef GENERAL_H_
#define GENERAL_H_
#include <Arduino.h>

class General {
public:
	General();
	virtual ~General();

	void digitalWriteArray(int pins[], int vals[]);
};

#endif