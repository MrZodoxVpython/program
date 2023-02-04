#include <iostream>

int main() {
for (int i = 0; i < 5; ++i) {
for (int j = 0; j < 10; ++j) {
if (i == 0 || i == 4 || j == 0 || j == 9 - i) {
std::cout << "*";
} else {
std::cout << " ";
}
}
std::cout << std::endl;
}
return 0;
}
