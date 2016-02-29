
#include <iostream>
#include "MagicLamp.h"

namespace arabiannights {
	class Genie;
	class RecyclableDemon;
}

int main() {
	std::cout << std::endl;
	
	arabiannights::MagicLamp ml(4);

	int wishes[] = { 2, 3, 4, 5, 1 };  // number of wishes per genie
	arabiannights::Genie *genies[5];                  // vector for genies

	for (size_t gx = 0; gx < 5; gx++) genies[gx] = ml.rub(wishes[gx]);

	for (size_t gx = 0; gx < 5; gx++) std::cout << *genies[gx] << std::endl;

	for (size_t gx = 0; gx < 5; gx++) genies[gx]->grantWish();

	for (size_t gx = 0; gx < 5; gx++) std::cout << *genies[gx] << std::endl;

	for (size_t gx = 0; gx < 5; gx++) genies[gx]->grantWish();

	for (size_t gx = 0; gx < 5; gx++) std::cout << *genies[gx] << std::endl;

	ml.feedDemon((arabiannights::RecyclableDemon*)genies[4]);

	arabiannights::Genie *g = ml.rub(7);

	std::cout << *g << std::endl;
	
	std::cout << std::endl;
	return 0;
} 
