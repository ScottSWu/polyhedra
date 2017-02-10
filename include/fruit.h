#ifndef _FRUIT
#define _FRUIT

#include <string>

class Fruit {
protected:
    /** Name of the fruit class author */
    std::string _author;

public:
    Fruit(std::string author);
    virtual ~Fruit();

    /** Get the name of the fruit */
    virtual std::string get_name();

    /** Get the author of the fruit class. Note this is not virtual. */
    std::string get_author();

    /** Get the weight of the fruit */
    virtual double get_weight();

    /** Is this fruit delicious */	
    virtual bool is_delicious();

    /** Get accumulated information about this fruit */
    std::string get_info();
};

#endif
