
#ifndef __SHEARABLE_H__
#define __SHEARABLE_H__
 
class Shearable {
public:
	virtual ~Shearable() {}

	virtual void shear() = 0;

	virtual void growWool() = 0;

	virtual void add(Shearable *s) = 0;
};
 
#endif