#ifndef _TRUNCATED_TETRAHEDRON
#define _TRUNCATED_TETRAHEDRON
#include <string>
#include "polyhedron.h"

class TruncatedTetrahedron : public Polyhedron {
private:
    double _volume;    
public:
    TruncatedTetrahedron (std::string author);
    virtual ~TruncatedTetrahedron ();

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
