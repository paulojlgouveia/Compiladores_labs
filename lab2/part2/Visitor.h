#ifndef __VISITOR_H__
#define __VISITOR_H__
 
// do not include (just declare classes)
class Animal;
class Sheep; class BlackSheep; class WhiteSheep;
class Goat;
class Herd;
 
class Visitor {
public:
	virtual ~Visitor() {}
	virtual void processAnimal(Animal *) = 0;
	virtual void processSheep(Sheep *) = 0;
	
	virtual void processBlackSheep(BlackSheep *) = 0;
	virtual void processWhiteSheep(WhiteSheep *) = 0;
	
	virtual void processGoat(Goat *) = 0;
	
	virtual void processHerd(Herd *) = 0;
};
 
#endif