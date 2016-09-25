#include "tetrahedron.h"

#include <cmath>

Tetrahedron::Tetrahedron(std::string author) : Polyhedron(author){
	_area = 30.0;
	_height = 12.0;
	_volume = (1.0/3.0) * _area * _height;
}

Tetrahedron::~Tetrahedron(){
}

std::string Tetrahedron::get_name(){
	return "Tetrahedron";
}

unsigned int Tetrahedron::get_faces(){
	return 4;
}

unsigned int Tetrahedron::get_edges(){
	return 6;
}

unsigned int Tetrahedron::get_vertices(){
	return 4;
}

double Tetrahedron::get_volume(){
	return _volume;
}

bool Tetrahedron::is_convex(){
	return true;
}
