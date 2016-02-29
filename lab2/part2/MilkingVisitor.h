
#ifndef __MILKINGVISITOR_H__
#define __MILKINGVISITOR_H__
 
#include "Visitor.h"
#include "BlackSheep.h"
#include "WhiteSheep.h"
#include "Goat.h"
#include "Herd.h"


class MilkingVisitor : public Visitor {
public:
	void processAnimal(Animal*) { /* do nothing */ }
	void processSheep(Sheep*) { /* do nothing */ }
	
	void processBlackSheep(BlackSheep *b) {
		std::cerr << "BlackSheep::milking" << std::endl;
	}
	
	void processWhiteSheep(WhiteSheep *w) {
		std::cerr << "WhiteSheep::milking" << std::endl;
	}
	
	void processGoat(Goat*) {
		std::cerr << "Goat::milking" << std::endl;
	}
	
	void processHerd(Herd *h) {
		for (size_t hx = 0; hx < h->size(); hx++)
			h->at(hx)->accept(this);
	}
};
 
#endif