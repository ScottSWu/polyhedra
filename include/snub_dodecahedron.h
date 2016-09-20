#ifndef _SNUB_POLYHEDRON
#define _SNUB_POLYHEDRON

#include <string>

#include "polyhedron.h"

class SnubDodecahedron : public Polyhedron {
private:
    // Constants for computing volume. See
    // https://en.wikipedia.org/wiki/Snub_dodecahedron#Surface_area_and_volume
    // for details.
    double _phi, _xi, _volume;
public:
    SnubDodecahedron(std::string author);
    virtual ~SnubDodecahedron();

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
