#include "fruit.h"

// This constructor uses a member-initializer list, which have a slight performance boost
// in limited circumstances ( http://stackoverflow.com/questions/1598967/benefits-of-initialization-lists )
// but because people like Scott Wu think they're cool, I have to show you them.
// http://www.learncpp.com/cpp-tutorial/8-5a-constructor-member-initializer-lists/
// Also note the :: is a namespacing operator. Feel free to look that up on your own,
// but in brief it makes the Fruit constructor a member of the Fruit namespace.
Fruit::Fruit(std::string author) : _author(author) {

}

Fruit::~Fruit() {}

std::string Fruit::get_name() {
	return "";
}

std::string Fruit::get_author() {
	return _author;
}

bool Fruit::is_delicious() {
	return false;
}

std::string Fruit::get_info() {
	return get_name() + " created by " + get_author();
}

double Fruit::get_weight() {
	return -1;
}

