#include <iostream>

int main() {
 int x, y, suma;

 std::cout << "Introduce un número: ";
 std::cin >> x;
 std::cout << "Introduce otro número: ";
 std::cin >> y;
 suma = x + y;

 std::cout << x << " + " << y << " = " << suma;
 return 0;
}
