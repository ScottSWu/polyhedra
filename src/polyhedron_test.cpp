#include <cmath>
#include <cstdlib>
#include <memory>
#include <vector>

#include "polyhedron.h"

#include "snub_cube.h"

#include "snub_dodecahedron.h"
#include "truncated_tetrahedron.h"
#include "tetrahedron.h"
#include "cube.h"
#include "octahedron.h"

int main() {
    std::vector<std::shared_ptr<Polyhedron>> polyhedra;
 
    // Add your name and polyhedron here!
    polyhedra.push_back(std::make_shared<SnubDodecahedron>("Scott Wu"));
    polyhedra.push_back(std::make_shared<TruncatedTetrahedron>("Kevin Jiang"));
    polyhedra.push_back(std::make_shared<SnubCube>("Jeffery Lee"));
    polyhedra.push_back(std::make_shared<Tetrahedron>("Emily Leng"));
    polyhedra.push_back(std::make_shared<Cube>("Jimmy Chen"));
    polyhedra.push_back(std::make_shared<Octahedron>("Oscar Pacheco"));
    // Don't edit below
    std::srand(1996);
    for (auto itr = polyhedra.begin(); itr != polyhedra.end(); itr++) {
        auto polyhedron = *itr;
        // Display polyhedron info
        printf("Examining the %s:\n", polyhedron->get_info().c_str());

        // Check that the polyhedron is convex
        if (!polyhedron->is_convex()) {
            printf("Error: This polyhedron is not convex!\n");
            return 1;
        }

        // Compute the volume
        double radius = ((double) std::rand() / (double) RAND_MAX) * 5.0 + 1.0;
        double volume = polyhedron->get_volume(radius);
        printf("    Volume: %llf @ radius = %llf\n", volume, radius);

        // Ensure the volume is valid (less than that of a sphere)
        double sphere_volume = 4.0 / 3.0 * 3.1415926535 * pow(radius, 3.0);
        if (volume > sphere_volume) {
            printf("Error: Volume is greater than the circumscribed sphere!\n");
            return 1;
        }

        // Ensure Euler's formula holds
        int f = polyhedron->get_faces();
        int e = polyhedron->get_edges();
        int v = polyhedron->get_vertices();
        printf("    F = %d, V = %d, E = %d\n", f, v, e);

        if (f + v != e + 2) {
            printf("Error: Euler's formula does not hold! (F + V - E = 2)\n");
            return 1;
        }
    }
    printf("All polyhedra pass!\n");
    return 0;
}

