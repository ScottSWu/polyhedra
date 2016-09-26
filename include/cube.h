#ifndef _CUBE
#define _CUBE
#include <string>
#include "Polyhedron.h"


class Cube : public Polyhedron {

// Anything following this will be a public member of the class
public:
    // Constructor - takes the author's name as an input
    Cube(std::string author);
    // Destructor
    virtual ~Cube();


    /** Get the name of the polyhedron */
    virtual std::string get_name();


    /** Get the number of faces in this polyhedron */
    virtual unsigned int get_faces();

    /** Get the number of edges in this polyhedron */
    virtual unsigned int get_edges();

    /** Get the number of vertices in this polyhedron */
    virtual unsigned int get_vertices();

    /** Compute and return the volume given the circumscribed radius */
    virtual double get_volume(double radius);

    /** Is this polyhedron convex */
    virtual bool is_convex();

};

#endif