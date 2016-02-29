#ifndef __ANIMAL_H__
#define __ANIMAL_H__
 
#include "Visitor.h"
 
class Animal {
public:
	virtual ~Animal() {}

	virtual void accept(Visitor *v) {
		v->processAnimal(this);
	}

	virtual void add(Animal *s) = 0;
};
 
#endif