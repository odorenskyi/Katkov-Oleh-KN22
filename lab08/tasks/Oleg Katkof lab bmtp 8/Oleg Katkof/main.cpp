#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "Enter coefficients a, b and c: ";
    std::cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;
    double sqrt_discriminant = std::sqrt(discriminant);

    if (discriminant < 0) {
        std::cout << "Roots are complex numbers." << std::endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        std::cout << "Root is: " << root << std::endl;
    } else {
        double root1 = (-b + sqrt_discriminant) / (2 * a);
        double root2 = (-b - sqrt_discriminant) / (2 * a);
        std::cout << "Roots are: " << root1 << " and " << root2 << std::endl;
    }

    return 0;
}
