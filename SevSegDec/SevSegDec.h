/*
 * SevSegDec.h
 *
 *  Created on: 09-Apr-2017
 *      Author: sonu
 */

#ifndef SEVSEGDEC_H_
#define SEVSEGDEC_H_

#include <Arduino.h>

class SevSegDec {
public:
	int pins[4];
	virtual ~SevSegDec();
	SevSegDec(int a, int b, int c, int d);

  	void initz();
  	void display(int n);
 	void count(int time);
 	void test();
};

#endif /* SEVSEGDEC_H_ */
