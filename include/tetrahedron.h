#ifndef _TETRAHEDRON
#define _TETRAHEDRON

#include <string>
#include "polyhedron.h"

class Tetrahedron : public Polyhedron {

private:
	double _area, _height, _volume;

public: 
	Tetrahedron(std::string author);
	virtual ~Tetrahedron();

	virtual std::string get_name();
	virtual unsigned int get_faces();
	virtual unsigned int get_edges();
	virtual unsigned int get_vertices();
	virtual double get_volume();
	virtual bool is_convex();

};

#endif

