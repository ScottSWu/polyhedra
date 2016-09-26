#include "cube.h"
#include <cmath>

Cube::Cube(std::string author) : Polyhedron(author) {
    
}
Cube::~Cube() {
}

std::string Cube::get_name() {
    return "Cube";
}

/** Get the number of faces in this polyhedron */
    unsigned int Cube::get_faces() {
    	return 6;
    }

    unsigned int Cube::get_edges() {
    	return 12;
    }

    unsigned int Cube::get_vertices() {
    	return 8;
    }

    double Cube::get_volume(double radius) {
    	return pow (radius, 3);
    }

    bool Cube::is_convex() {
    	return true;
    }
