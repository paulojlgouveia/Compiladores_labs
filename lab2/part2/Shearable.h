
#ifndef __SHEARABLE_H__
#define __SHEARABLE_H__

#include "Animal.h"
#include <iostream>


class Shearable : public Animal {
	
public:
	~Shearable() {}
	
	virtual void shear() = 0;
	virtual void growWool() = 0;
	
	void add(Animal *a) { throw "unsupported operation"; }
	
}



#endif
