
#ifndef __ARABIANNIGHTS_RECYCLABLEDEMON_H__
#define __ARABIANNIGHTS_RECYCLABLEDEMON_H__

#include <iostream>
#include "Genie.h"

namespace arabiannights {

	class RecyclableDemon : public Genie {
		bool _recycled;
		
		friend class MagicLamp;  // for calling recycle
		
		void recycle() { _recycled = true; }

	public:

		RecyclableDemon(int limit) : Genie(limit), _recycled(false) {}
		
		bool canGrantWish() const { return !_recycled; }
		
		bool recycled() const { return _recycled; }
		
		void dumpTo(std::ostream &o) const {
			if (_recycled)
				o << "Demon has been recycled.";
			else
				o << "Recyclable demon has granted " << nGrantedWishes() << " wishes.";
		}
		
		friend std::ostream &operator<<(std::ostream &o, const RecyclableDemon &rd) {
			rd.dumpTo(o);
			return o;
		}

	};

} // namespace arabiannights

#if 0
inline std::ostream &operator<<(std::ostream &o, const RecyclableDemon &rd) {
	rd.dumpTo(o);
	return o;
}
#endif

#endif