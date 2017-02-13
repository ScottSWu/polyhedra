
#ifndef _ORANGE
#define _ORANGE

#include <string>
#include "fruit.h"

using namespace std;

class Orange : public Fruit{
  private:
          double _weight;
  public:
          Orange(string author);

          virtual ~Orange();

          virtual string get_name();

          virtual double get_weight();

          virtual bool is_delicious();
};
#endif
