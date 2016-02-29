#ifndef __GROWWOOLVISITOR_H__
#define __GROWWOOLVISITOR_H__
 
#include "Visitor.h"
#include "BlackSheep.h"
#include "WhiteSheep.h"
#include "Goat.h"
#include "Herd.h"
 

class GrowWoolVisitor : public Visitor {
public:
	void processAnimal(Animal*) { /* do nothing */ }
	void processSheep(Sheep*) { /* do nothing */ }
	
	void processBlackSheep(BlackSheep *b) {
		std::cerr << "BlackSheep::growWool" << std::endl;
		b->incrementWoolLength(100);
	}
	
	void processWhiteSheep(WhiteSheep *w) {
		std::cerr << "WhiteSheep::growWool" << std::endl;
		w->incrementWoolLength(1);
	}
	
	void processGoat(Goat*) { /* do nothing */ }
	
	void processHerd(Herd *h) {
		for (size_t hx = 0; hx < h->size(); hx++)
			h->at(hx)->accept(this);
	}
};
 
#endif
