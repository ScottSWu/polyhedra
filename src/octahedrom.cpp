
#include "octahedron.h"
#include <cmath>

Octahedron::Octahedron(std::string author) : Polyhedron(author) {
	_volume = 4.0 / 3.0;
}

Octahedron::~Octahedron() {
}

/** Get the name of the polyhedron */
std::string Octahedron::get_name() {
	return "Octahedron";
}

/** Get the number of faces in this polyhedron */
unsigned int Octahedron::get_faces() {
	return 8;
}

/** Get the number of edges in this polyhedron */
unsigned int Octahedron::get_edges() {
	return 12;
}

/** Get the number of vertices in this polyhedron */
unsigned int Octahedron::get_vertices() {
	return 6;
}

/** Compute and return the volume given the circumscribed radius */
double Octahedron::get_volume(double radius) {
	return _volume * pow(radius, 3.0);
}

/** Is this polyhedron convex */
bool Octahedron::is_convex() {
	return true;
}

