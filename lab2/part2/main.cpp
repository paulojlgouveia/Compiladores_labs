
#include "BlackSheep.h"
#include "WhiteSheep.h"
#include "Goat.h"
#include "Herd.h"
 
#include "ShearingVisitor.h"
#include "GrowWoolVisitor.h"
#include "MilkingVisitor.h"
 
int main() {
	
	std::cout << std::endl;
	
	Animal *a1 = new BlackSheep();
	Animal *a2 = new WhiteSheep();
	Animal *a3 = new Goat();
	Animal *g1 = new Herd();
	Animal *g2 = new Herd();
	Animal *g3 = new Herd();
	
	g1->add(a1);
	g2->add(a2);  g2->add(a3);
	g3->add(g1);  g3->add(g2);
	
	Visitor *v1 = new ShearingVisitor();
	Visitor *v2 = new GrowWoolVisitor();
	Visitor *v3 = new MilkingVisitor();
	
	g3->accept(v1);  std::cout << std::endl;
	g3->accept(v2);  std::cout << std::endl;
	g3->accept(v3);
	
	delete a1;  delete a2;  delete a3;
	delete g1;  delete g2;  delete g3;
	delete v1;  delete v2;  delete v3;
	
	std::cout << std::endl;
	return 0;
}
