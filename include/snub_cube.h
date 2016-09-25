#ifndef _SNUB_CUBE
#define _SNUB_CUBE

#include <string>

#include "Polyhedron.h"

class SnubCube : public Polyhedron {
private:
    double _volume;
public:
    SnubCube(std::string author);
    virtual ~SnubCube();
    /** Get the name of the polyhedron */
    virtual std::string get_name();

    /** Get the author of the polyhedron class */
    std::string get_author();

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
