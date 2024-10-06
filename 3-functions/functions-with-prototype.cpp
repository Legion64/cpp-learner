#include <iostream>

/**
 * Bazı durumlarda çağırmak istediğimiz fonksiyonu en yukarıda tanımlamak istemeyiz.
 * Bunun için C++ compiler'ına (GCC, MinWG etc.) bu fonksiyonun varlığını belirtmemiz gerekiyor.
 */

int sumnum(int, int);

int main() {
    int num1 = 3, num2 = 7;
    int result = sumnum(num1, num2);

    std::cout << "Total: " << result << std::endl;

    return 0;
}

int sumnum(int x, int y) {
    return x + y;
}