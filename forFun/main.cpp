#include <iostream>

int z;

int main() {
    // x is initialized with a garbage value
    int x;
    static int y;
    // extern int w must be defined elsewhere, otherwise linker error
    // extern int w;

    std::cout << "int x: " << x << '\n';
    std::cout << "static int y: " << y << '\n';
    std::cout << "global int z: " << z << '\n';
    // std::cout << "extern int w: " << w << '\n';

    // Default-Initialization
    int a;
    // Copy-assignment
    a = 0;
    // Copy-Initialization
    int b = 1;
    // Direct-Initialization
    int c (5);
    // Direct-List-Initialization (Preferred)
    int d {10};
    // Copy-List-Initialization (Preferred)
    int e = {10};
    // Value-Initialization (Preferred)
    int f = {};

    std::cout << "Value-initialized int f: " << f << '\n';

    int w1;
    w1 = 4.5;
}