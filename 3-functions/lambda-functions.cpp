#include <iostream>

/**
 * C++'da diğer dillerde olduğu gibi lambda fonksiyonlar kullanabiliyoruz. Bunlar anonim fonksiyon olarak da geçiyor
 * yani herhangi bir isimlendirme yapmadan bu fonksiyonları kullanabiliyoruz.
 */

/**
 * Syntax:
 * 
 * [capture-list](parameters) -> return_type {
 *   // function body
 * };
 * 
 * capture-list: Bu state, lambda fonksiyonun kod içerisinde hangi verilere ulaşabileceğini bildirdiğimiz kısımdır
 * parameters: fonksiyona gönderilecek olan parametrelerin verildiği nokta
 * return_type: fonksiyonu dönüş tipi
 */


int main() {
    const int multiplier = 5;

    auto printHello = []() -> void {
        std::cout << "Hello, World!" << std::endl;
    };

    printHello();

    // ----------------------------------------------

    auto times = [multiplier](int a) {
        return multiplier * a;
    };

    times(5); // result: 5 * 5 = 25;

    // ----------------------------------------------

    int expiresInDays = 45;

    auto updateDays = [&expiresInDays](int newDays) {
        expiresInDays = newDays;
    };

    updateDays(30); // result: expiresInDays => 30

    return 0;
}
