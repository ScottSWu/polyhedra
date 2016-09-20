#include "snub_dodecahedron.h"

#include <cmath>

SnubDodecahedron::SnubDodecahedron(std::string author) : Polyhedron(author) {
    _phi = (1.0 + sqrt(5.0)) * 0.5;
    _xi = cbrt(_phi * 0.5 + 0.5 * sqrt(_phi - 5.0 / 27.0)) +
          cbrt(_phi * 0.5 - 0.5 * sqrt(_phi - 5.0 / 27.0));
    _volume = (12.0 * _xi * _xi * (3.0 * _phi + 1.0) -
              _xi * (36.0 * _phi + 7.0) - (53.0 * _phi + 6.0)) /
              (6.0 * pow(sqrt(3.0 - _xi * _xi), 3.0));
    _volume = _volume / pow(2.15583737, 3.0);
}

SnubDodecahedron::~SnubDodecahedron() {
}

std::string SnubDodecahedron::get_name() {
    return "Snub Dodecahedron";
}

unsigned int SnubDodecahedron::get_faces() {
    return 92;
}

unsigned int SnubDodecahedron::get_edges() {
    return 150;
}

unsigned int SnubDodecahedron::get_vertices() {
    return 60;
}

double SnubDodecahedron::get_volume(double radius) {
    return _volume * radius;
}

bool SnubDodecahedron::is_convex() {
    return true;
}
