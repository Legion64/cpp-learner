#include <iostream>

/**
 * Overloading C++'ta önemli bir rol oynamaktadır. Aşırı yüklemeler aynı fonksiyon ismine sahip fakat
 * farklı parametreler içeren fonksiyon türleridir. Bu, kod olarak aynı işi yapan farklı fonksiyonların
 * oluşturulmasını önemli ölçüde düşürür.
 */

void print(int num) {
    std::cout << "Printing int: " << num << std::endl;
}

void print(double num) {
    std::cout << "Printing double: " << num << std::endl;
}

void print(char const *str) {
    std::cout << "Printing string: " << str << std::endl;
}

int main() {
    print(5);
    print(3.14);
    print("Hello, world!");

    return 0;
}