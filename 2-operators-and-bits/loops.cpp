#include <iostream>

int main() {
    int i;

    // For Loop
    std::cout << "For Loop" << std::endl;
    for (i = 0; i < 5; i++) {
        std::cout << "Döngü: " << i << std::endl;
    }

    std::cout << std::endl;

    // While Loop
    std::cout << "While Loop" << std::endl;
    i = 0;
    while (i < 5) {
        std::cout << "Döngü: " << i << std::endl;
        i++;
    }

    std::cout << std::endl;

    // Do - While (Kod bloğu ilk sefer hiçbir condition'a bakmadan okunur. Sonrasında while içerisinde condition kontrol edilir.)
    std::cout << "Do - While Loop" << std::endl;
    i = 0;
    do {
        std::cout << "Döngü: " << i << std::endl;
        i++;
    } while (i < 5);

    return 0;
}
