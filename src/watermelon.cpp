#include "watermelon.h"

// Class definitions start with <ClassName>::function
//                                        Superclass constructor is called here
Watermelon::Watermelon(std::string author) : Fruit(author) {
	_weight = 3.0;
}

// Functions may be empty, but they still need to be defined if virtual
Watermelon::~Watermelon() {
}

std::string Watermelon::get_name() {
	return "Watermelon";
}

bool Watermelon::is_delicious() {
	return true;
}


double Watermelon::get_weight() {
	return _weight;
}
