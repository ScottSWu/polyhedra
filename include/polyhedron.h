#ifndef _POLYHEDRON
#define _POLYHEDRON

#include <string>

class Polyhedron {
protected:
    /** Name of the polyhedron class author */
    std::string _author;

public:
    Polyhedron(std::string author);
    virtual ~Polyhedron();

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

    /** Get accumulated information about this polyhedron */
    std::string get_info();
};

#endif
