
#ifndef __SHEEP_H__
#define __SHEEP_H__
 
#include "Shearable.h"
 
class Sheep : public Shearable {
	
	int _woolLength; // should be private...
	
public:

	Sheep(int woolLength) : _woolLength(woolLength) {}

	void add(Shearable *s) { throw "unsupported operation"; }
	
	int getWoolLength() const { return _woolLength; }
	
	int setWoolLength(int length) { _woolLength = length; }
	
};
 
#endif