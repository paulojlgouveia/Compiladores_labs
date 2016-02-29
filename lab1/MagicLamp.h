 
#ifndef __ARABIANNIGHTS_MAGICLAMP_H__
#define __ARABIANNIGHTS_MAGICLAMP_H__

#include <vector>

#include "Genie.h"
#include "FriendlyGenie.h"
#include "GrumpyGenie.h"
#include "RecyclableDemon.h"

namespace arabiannights {
	
	class Genie;             // just a declaration
    class RecyclableDemon;   // just a declaration
	
	class MagicLamp {
 
		int _limit;
		int _totalRubs;
		int _rubs;
		int _demons;

		std::vector<Genie*> _genies;

		RecyclableDemon *_demon;

	public:
		MagicLamp(int limit)
			: _limit(limit), _totalRubs(0), _rubs(0), _demons(0), _demon(NULL) {}

		virtual ~MagicLamp();

		int getLimit()     const { return _limit; }
		int getRubs()      const { return _rubs; }
		int getTotalRubs() const { return _totalRubs; }

		int  nGenies() const { return getLimit() - getRubs(); }
		int  nDemons() const { return _demons; }


		virtual Genie *rub(int wishes);
			
		virtual void feedDemon(RecyclableDemon *demon);


		inline bool operator==(const MagicLamp &l) {
			return getLimit() == l.getLimit()
					&& nGenies()  == l.nGenies()
					&& nDemons() == l.nDemons();
		}

	};
	
}	
	
#endif