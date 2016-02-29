#ifndef __BLACKSHEEP_H__
#define __BLACKSHEEP_H__
 
#include <iostream>
#include "Sheep.h"
 
class BlackSheep : public Sheep {
public:

	BlackSheep() : Sheep(100) {}
	
	virtual void accept(Visitor *v) {
		v->processBlackSheep(this);
	}
	
};
 
#endif