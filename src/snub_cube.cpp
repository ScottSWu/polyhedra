#include "snub_cube.h"

SnubCube::SnubCube(std::string author) : Polyhedron(author) {
  _volume = 0;
}

SnubCube::~SnubCube() {
}

std::string SnubCube::get_name() {
    return "Snub Cube";
}

unsigned int SnubCube::get_faces() {
    return 38;
}

unsigned int SnubCube::get_edges() {
    return 60;
}

unsigned int SnubCube::get_vertices() {
    return 24;
}

double SnubCube::get_volume(double radius) {
    return _volume * radius;
}

bool SnubCube::is_convex() {
    return true;
}
