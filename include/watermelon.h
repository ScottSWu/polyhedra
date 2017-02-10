// These are the header guards. The guard name should be unique
#ifndef _WATERMELON
#define _WATERMELON

// Angle brackets identify a system header
#include <string>

// Quotations identify a local header
#include "fruit.h"

// Extend a class with a colon
class Watermelon : public Fruit {
	private: // Everything after this is private
	    double _weight;
	public: // Everything after this is public
	    /**
	     * Constructor
	     *
	     * @param author    The name of the person who created the instance
	     */
	    Watermelon(std::string author);

	    /**
	     * Destructor
	     */
	    virtual ~Watermelon();

	    /**
	      * Get the name of the fruit
	      *
	      * @return name
	      */
	    virtual std::string get_name();

	    // The 'virtual' keyword is needed on all functions that may be subclassed.
            // This is due to the extra cost incurred by dynamic dispatch and run-time class lookup.

	    /**
	      * Get the weight of the fruit
	      *
	      * @return weight
	      */
	    virtual double get_weight();

	    /**
	      * Is this fruit delicious
	      *
	      * @return is delicious
	      */
	    virtual bool is_delicious();
};

// Don't forget to close the header guard
#endif
