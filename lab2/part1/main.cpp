
#include "WhiteSheep.h"
#include "BlackSheep.h"
#include "Herd.h"
 
int main() {
	
	std::cerr << std::endl;
	
	Shearable *s1 = new WhiteSheep();
	Shearable *s2 = new BlackSheep();
	Shearable *g1 = new Herd();
	Shearable *g2 = new Herd();
	Shearable *g3 = new Herd();
	
	g1->add(s1);  g2->add(s2);  g3->add(g1);  g3->add(g2);
	
	s1->shear();  s1->growWool();
	s2->shear();  s2->growWool();
	g1->shear();  g2->shear();  g3->growWool();
	g3->shear();
	
	delete s1; delete s2;
	delete g1; delete g2; delete g3;
	
	std::cerr << std::endl;

	return 0;
}