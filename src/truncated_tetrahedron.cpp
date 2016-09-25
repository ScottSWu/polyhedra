#include "truncated_tetrahedron.h"

#include <cmath>

TruncatedTetrahedron::TruncatedTetrahedron(std::string author) : Polyhedron(author) {
    _volume = (23.0 / 12) * sqrt(2.0);
    _volume = _volume / pow(1.17260, 3.0);
}

TruncatedTetrahedron::~TruncatedTetrahedron() {
    
}

std::string TruncatedTetrahedron::get_name() {
    return "Truncated Tetrahedron";
}

unsigned int TruncatedTetrahedron::get_faces() {
    return 8;
}

unsigned int TruncatedTetrahedron::get_edges() {
    return 18;
}

unsigned int TruncatedTetrahedron::get_vertices() {
    return 12;
}

double TruncatedTetrahedron::get_volume(double radius) {
    return _volume * radius;
}

bool TruncatedTetrahedron::is_convex() {
    return true;
}