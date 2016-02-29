#ifndef __GOAT_H__
#define __GOAT_H__
 
#include "Animal.h"
 
class Goat : public Animal {
public:

	virtual void accept(Visitor *v) {
		v->processGoat(this);
	}
	
	void add(Animal *a) { throw "unsupported operation"; }
};
 
#endif