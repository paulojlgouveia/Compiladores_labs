#ifndef __SHEEP_H__
#define __SHEEP_H__
 
#include "Animal.h"
 
class Sheep : public Animal {

	int _woolLength;
 
public:
	
	Sheep(int woolLength) : _woolLength(woolLength) {}
	
	int woolLength() const { return _woolLength; }

	void incrementWoolLength(int delta) { _woolLength += delta; }
	
	virtual void accept(Visitor *v) {
		v->processSheep(this);
	}

	void add(Animal *a) { throw "unsupported operation"; }
};
 
#endif