#include "strawberry.h"

Strawberry::Strawberry(std::string author) : Fruit(author) {
  _weight = 3.0;
}

Strawberry::~Strawberry(){}

std::string Strawberry::get_name() {
	return "Watermelon";
}

bool Strawberry::is_delicious() {
	return true;
}

double Strawberry::get_weight() {
	return _weight;
}
