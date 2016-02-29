#ifndef __HERD_H__
#define __HERD_H__
 
#include <vector>
#include <iostream>
#include "Animal.h"
 
class Herd : public Animal {
	std::vector<Animal*> _animals;
 
public:

	size_t size() const { return _animals.size(); }
	
	Animal *at(size_t index) { return _animals.at(index); }
	
	virtual void accept(Visitor *v) {
		v->processHerd(this);
	}
	
	void add(Animal *a) { _animals.push_back(a); }
};
 
#endif