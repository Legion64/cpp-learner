#include <iostream>

/**
 * Referanslar bir değişkenin alias'ı olarak tanımlanır. Yani hem referans hem de değişken bellekteki aynı yeri
 * refere ederler. Pointerlardan farklı olarak, referanslar null olamaz ve tanımlandıkları anda initialized olması
 * gerekir. Ek olarak bir kez tanımlanan referans sonrasında başka bir veriyi referans etmesi için değiştirilmez.
 * 
 */

void sum(int&, const int);

int main() {
    int num = 44;
    int& num_ref = num;

    num_ref = 20;

    std::cout << num << std::endl; // result = 20

    // ----------------------------

    const int sumnum = 11;

    sum(num_ref, sumnum);

    std::cout << num << std::endl; // result = 20 + 11 = 31

    return 0;
}

void sum(int& x, const int y) {
    x += y;
}

