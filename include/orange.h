#ifndef _ORANGE_
#define _ORANGE_

#include <string>


#include "fruit.h"


class Orange : public Fruit {
 private:
  double _weight;
 public:
  Orange(std::string author);

  virtual ~Orange();

  virtual std::string get_name();

  virtual double get_weight();

  virtual bool is_delicious();
};

#endif
