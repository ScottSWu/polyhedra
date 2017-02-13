#include "orange.h"

Orange::Orange(std::string author) : Fruit(author){
  _weight = 3.0;
}

Orange::~Orange(){

}

bool Orange::is_delicious(){
  return true;
}

double Orange::get_weight(){
  return _weight;
}

std::string Orange::get_name(){
  return "orange";
}
