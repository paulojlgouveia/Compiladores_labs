#ifndef __WHITESHEEP_H__
#define __WHITESHEEP_H__
 
#include <iostream>
#include "Sheep.h"
 
class WhiteSheep : public Sheep {
public:
	WhiteSheep() : Sheep(10) {}

	
	virtual void accept(Visitor *v) {
		v->processWhiteSheep(this);
	}
 
};
 
#endif