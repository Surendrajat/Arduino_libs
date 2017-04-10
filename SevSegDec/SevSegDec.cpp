/*
 * SevSegDec.cpp
 *
 *  Created on: 09-Apr-2017
 *      Author: sonu
 */
#include "SevSegDec.h"

SevSegDec::~SevSegDec() {
}

SevSegDec::SevSegDec(int a, int b, int c, int d): pins{a,b,c,d} {
}

void SevSegDec::initz(){
  for(int i=0; i<4; i++){
    pinMode(pins[i], 1);
  }
}
void SevSegDec::display(int n){
  for(int i=0; i<4; i++){
    digitalWrite(pins[i], n%2);
    n /= 2;
  }
}
void SevSegDec::count(int time_delay){
	for(int i=0; i<10; i++){
		display(i);
		delay(time_delay);
	}
}
void SevSegDec::test(){
	display(8);
	delay(100);
}