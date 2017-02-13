#ifndef _STRAWBERRY
#define _STRAWBERRY

#include <string>
#include "fruit.h"

class Strawberry : public Fruit {
private:
  double _weight;
public:
  Strawberry(std::string author);

  virtual ~Strawberry();

  virtual std::string get_name();

  virtual double get_weight();

  virtual bool is_delicious();
};

#endif
