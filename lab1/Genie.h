 
#ifndef __ARABIANNIGHTS_GENIE_H__
#define __ARABIANNIGHTS_GENIE_H__

#include <iostream>

namespace arabiannights {

class Genie {

	int _limit;

	int _granted;

protected:
	// only instances from superclasses are allowed
	Genie(int limit) : _limit(limit), _granted(0) {}

public:
	virtual ~Genie() {}

	int getLimit() const { return _limit; }

	virtual int  nGrantedWishes()   const { return _granted; }
	virtual void incrementGranted()       { _granted++; }

	virtual bool grantWish() {
		if (canGrantWish()) {
			incrementGranted();
			doGrantWish();
			
			return true;
		}
		
		return false;
	}

	virtual bool canGrantWish() const { return _granted < _limit; }

	virtual void doGrantWish() {}

	virtual void dumpTo(std::ostream &o) const = 0;

	friend std::ostream &operator<<(std::ostream &o, const Genie &g) {
		g.dumpTo(o);
		return o;
	}

};

} // namespace arabiannights

#if 0
inline std::ostream &operator<<(std::ostream &o, const Genie &g) {
	rd.dumpTo(o);
	return o;
}
#endif

#endif