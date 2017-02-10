#ifndef _HONEY_DEW
#define _HONEY_DEW

#include <string>

#include "fruit.h"

class HoneyDew : public Fruit
{
public:
     HoneyDew(std::string);
     virtual ~HoneyDew(){};

     virtual std::string get_name() override;
     virtual double get_weight() override;
     virtual bool is_delicious() override;

private:
    const double _weight = 1.9;
};

#endif



