
#include "MagicLamp.h"
 
arabiannights::MagicLamp::~MagicLamp() {
	if (_demon) delete _demon;
	for (size_t gx = 0; gx < _genies.size(); gx++)
		delete _genies[gx];
}


arabiannights::Genie *arabiannights::MagicLamp::rub(int wishes) {
	Genie *g;
	if (_rubs < _limit) {
		
		_rubs++;
		_totalRubs++;
		
		if (_totalRubs % 2 == 0) {
			g = new FriendlyGenie(wishes);
			_genies.push_back(g);  // remember we created the genie
			
			return g;              // return genie to the caller
		}
		
		Genie *g = new GrumpyGenie(wishes);
		_genies.push_back(g);    // remember we created the genie
		
		return g;                // return genie to the caller
	}
	
	return _demon = (_demon ? _demon : new RecyclableDemon(wishes));
}


void arabiannights::MagicLamp::feedDemon(arabiannights::RecyclableDemon *demon) {
	if (demon != _demon)
		return; // only accept our demon...
		
	if (!demon->recycled()) {
		demon->recycle();
		delete _demon;  // zap the lamp's demon and reset lamp
		_demon = NULL;
		_rubs = 0;
		_demons++;
	}
}