
#ifndef __WHITESHEEP_H__
#define __WHITESHEEP_H__
 
#include <iostream>
#include "Sheep.h"
 
class WhiteSheep : public Sheep {
public:
	WhiteSheep() : Sheep(10) {}
	void shear() {
		std::cerr << "WhiteSheep::shear" << std::endl;
		if (getWoolLength() > 5) setWoolLength(getWoolLength()-5);
	}
	void growWool() {
		std::cerr << "WhiteSheep::growWool" << std::endl;
		setWoolLength(getWoolLength()+1);
	}
};
 
#endif