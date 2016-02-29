
#ifndef __SHEARINGVISITOR_H__
#define __SHEARINGVISITOR_H__
 
#include "Visitor.h"
#include "BlackSheep.h"
#include "WhiteSheep.h"
#include "Goat.h"
#include "Herd.h"
 

class ShearingVisitor : public Visitor {
public:
	void processAnimal(Animal*) { /* do nothing */ }
	void processSheep(Sheep*) { /* do nothing */ }
	
	void processBlackSheep(BlackSheep *b) {
		std::cerr << "BlackSheep::shear" << std::endl;
		while (b->woolLength() > 10)
			b->incrementWoolLength(-10);
	}
	
	void processWhiteSheep(WhiteSheep *w) {
		std::cerr << "WhiteSheep::shear" << std::endl;
		if (w->woolLength() > 5)
			w->incrementWoolLength(-5);
	}
	
	void processGoat(Goat*) { /* do nothing */ }
	
	void processHerd(Herd *h) {
		for (size_t hx = 0; hx < h->size(); hx++)
			h->at(hx)->accept(this);
	}
};
 
#endif
