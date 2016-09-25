// These are the header guards. The guard name should be unique
#ifndef _SNUB_POLYHEDRON
#define _SNUB_POLYHEDRON

// Angle brackets identify a system header
#include <string>

// Quotations identify a local header
#include "polyhedron.h"

// Extend a class with a colon
class SnubDodecahedron : public Polyhedron {
private: // Everything after this is private
    // Constants for computing volume. See
    // https://en.wikipedia.org/wiki/Snub_dodecahedron#Surface_area_and_volume
    // for details.
    double _phi, _xi, _volume;
public: // Everything after this is public
    /**
     * Constructor
     *
     * @param author    The name of the person who created the instance
     */
    SnubDodecahedron(std::string author);

    /**
     * Destructor
     */
    virtual ~SnubDodecahedron();

    /**
      * Get the name of the polyhedron
      *
      * @return name
      */
    virtual std::string get_name();
    // The 'virtual' keyword is needed on all functions that may be subclassed

    /**
      * Get the number of faces in this polyhedron
      *
      * @return faces
      */
    virtual unsigned int get_faces();

    /**
      * Get the number of edges in this polyhedron
      *
      * @return edges
      */
    virtual unsigned int get_edges();

    /**
      * Get the number of vertices in this polyhedron
      *
      * @return vertices
      */
    virtual unsigned int get_vertices();

    /**
      * Compute and return the volume given the circumscribed radius
      *
      * @return volume
      */
    virtual double get_volume(double radius);

    /**
      * Is this polyhedron convex
      *
      * @return is convex
      */
    virtual bool is_convex();
};

// Don't forget to close the header guard
#endif
