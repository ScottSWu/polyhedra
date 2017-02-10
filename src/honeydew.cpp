#include "honeydew.h"

HoneyDew::HoneyDew(std::string author) : Fruit(author)
{
    
}

double HoneyDew::get_weight()
{
    return this->_weight;
}

std::string HoneyDew::get_name()
{
    return "honeydew";
}

bool HoneyDew::is_delicious()
{
    return true;
}
