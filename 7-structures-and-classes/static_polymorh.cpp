#include <iostream>

/**
 * C++'da static polimorfizim uygulamanın en temel yolu template keyword'ünü kullanmaktır.
 * template bir fonksiyonun generic olduğunu belirtir fakat önemli olan detay, tipin runtime zamanında değil,
 * compile zamanında belirlenmesidir. Böylece daha hızlı ve verimli çalışan bir uygulama elde etmiş oluruz.
 */
template<typename T>
void print(const T& value) {
    std::cout << "Printing value: " << value << std::endl;
}

int main() {
    print(42);           // int
    print(3.14159);      // double
    print("Hello");      // const char*

    return 0;
}