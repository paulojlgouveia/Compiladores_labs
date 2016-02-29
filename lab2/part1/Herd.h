
#ifndef __HERD_H__
#define __HERD_H__
 
#include <vector>
#include <iostream>
#include "Shearable.h"
 
class Herd : public Shearable {
	std::vector<Shearable*> _shearable;
 
public:

	void shear() {
		std::cerr << "Herd::shear: starting..." << std::endl;
		for (size_t sx = 0; sx < _shearable.size(); sx++)
		_shearable[sx]->shear();
		std::cerr << "Herd::shear: done." << std::endl;
	}

	void growWool() {
		std::cerr << "Herd::growWool: starting..." << std::endl;
		for (size_t sx = 0; sx < _shearable.size(); sx++)
		_shearable[sx]->growWool();
		std::cerr << "Herd::growWool: done." << std::endl;
	}

	void add(Shearable *s) { _shearable.push_back(s); }
};
 
#endif
