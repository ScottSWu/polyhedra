#include "honeydew.h"

Honeydew::Honeydew(std::string author) : Fruit(author)
{
    
}

double Honeydew::get_weight()
{
    return this->_weight;
}

std::string Honeydew::get_name()
{
    return "honeydew";
}

bool Honeydew::is_delicious()
{
    return true;
}
