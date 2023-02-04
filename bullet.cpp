#include <iostream>
#include <cmath>

const double pi = 3.14159265358979323846;

int main() {
int r;
std::cout << "Enter the radius of the circle: ";
std::cin >> r;
for (int y = -r; y <= r; ++y) {
    for (int x = -r; x <= r; ++x) {
        if (std::round(std::sqrt(x * x + y * y)) == r) {
            std::cout << "*";
        } else {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}

return 0;
}
