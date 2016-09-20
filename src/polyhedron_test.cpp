#include <cmath>
#include <cstdlib>
#include <memory>
#include <vector>

#include "polyhedron.h"

#include "snub_dodecahedron.h"

int main() {
    std::vector<std::shared_ptr<Polyhedron>> polyhedra;

    // Add your name and polyhedron here!
    polyhedra.push_back(std::make_shared<SnubDodecahedron>("Scott Wu"));

    // Don't edit below
    std::srand(1996);
    for (auto itr = polyhedra.begin(); itr != polyhedra.end(); itr++) {
        auto polyhedron = *itr;
        // Display polyhedron info
        printf("Examining the %s -\n", polyhedron->get_info().c_str());

        // Check that the polyhedron is convex
        if (!polyhedron->is_convex()) {
            printf("Error: This polyhedron is not convex!\n");
            return 1;
        }

        // Compute the volume
        double radius = ((double) std::rand() / (double) RAND_MAX) * 5.0 + 1.0;
        double volume = polyhedron->get_volume(radius);
        printf("    Volume: %llf @ radius = %llf - ", volume, radius);

        // Ensure the volume is valid (less than that of a sphere)
        double sphere_volume = 4.0 / 3.0 * 3.1415926535 * pow(radius, 3.0);
        if (volume > sphere_volume) {
            printf("Error: Volume is greater than the circumscribed sphere!\n");
            return 1;
        }

        printf("All Good\n");
    }
    printf("All polyhedra pass!\n");
    return 0;
}
