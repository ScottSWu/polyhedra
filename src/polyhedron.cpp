#include "polyhedron.h"

Polyhedron::Polyhedron(std::string author) : _author(author) {
}

Polyhedron::~Polyhedron() {
}

std::string Polyhedron::get_name() {
    return "";
}

std::string Polyhedron::get_author() {
    return _author;
}

unsigned int Polyhedron::get_faces() {
    return 2;
}

unsigned int Polyhedron::get_edges() {
    return 0;
}

unsigned int Polyhedron::get_vertices() {
    return 0;
}

double Polyhedron::get_volume(double radius) {
    return 0.0;
}

bool Polyhedron::is_convex() {
    return false;
}

std::string Polyhedron::get_info() {
    return get_name() + " created by " + get_author();
}
