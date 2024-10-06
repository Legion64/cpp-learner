#include <iostream>

/**
 * C++ da kullanılmak üzere 2 fonksiyon tipi var. Bunlardan ilki;
 * 
 * Standart kütüphane fonksiyonları: Bu fonksiyonlar daha önceden standart kütüphanelerin içerisinde tanımlanmış olup
 * tek yapmamız gereken ilgili kütüphanenin header dosyasını include edip kullanmak.
 * 
 * User-defined Functions: Bu fonksiyonlar bizim tarafımızdan tanımlanan ve kod içerisinde 
 * kullanılabilecek fonksiyonlardır.
 * 
 */

/**
 * C++'da genel olarak fonksiyon tanımlamak için aşağıdaki gibi bir yapı kullanabiliriz.
 * 
 * return_type function_name(parameter list) {
 *   // function body
 * }
 */

int sumnum(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5, num2 = 10;
    int result = sumnum(num1, num2); // <-- fonksiyonu bu noktada çağırıyoruz.

    std::cout << "The sum is: " << result << std::endl;

    return 0;
}