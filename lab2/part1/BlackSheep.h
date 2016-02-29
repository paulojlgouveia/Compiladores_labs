
#ifndef __BLACKSHEEP_H__
#define __BLACKSHEEP_H__
 
#include <iostream>
#include "Sheep.h"
 
class BlackSheep : public Sheep {
public:

	BlackSheep() : Sheep(100) {}

	void shear() {
		std::cerr << "BlackSheep::shear" << std::endl;
		while (getWoolLength() > 10) setWoolLength(getWoolLength()-10);
	}

	
	void growWool() {
		std::cerr << "BlackSheep::growWool" << std::endl;
		setWoolLength(getWoolLength()+100);
	}
};
 
#endif