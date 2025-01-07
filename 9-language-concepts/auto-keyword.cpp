/**
 * auto anahtar kelimesi, bir değişkenin türünü belirlemekte kullanılır. Bu sayede, programcı değişkenin türünü
 * belirlemek zorunda kalmaz ve bu işlemi derleyiciye bırakır. Bu sayede, kodun okunabilirliği artar ve daha az
 * hata yapma olasılığı oluşur.
 * 
 * auto, aynı zamanda compile time'da türünü belirlediği için performans açısından da avantaj sağlar.
 * Ek olarak C++14 ile birlikte auto fonksiyon dönüş türü olarak da kullanılabilir.
 */

#include <iostream>
#include <vector>

int main() {
    int myInt = 5;
    auto myAutoInt = 5;

    std::vector<int> myVector = {1, 2, 3, 4, 5};

    // tipi belirlemek biraz zor olabilir
    for (std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it) {
        std::cout << *it << std::endl;
    }

    // burada tip otomatik belirlendiği için daha okunabilir ve kolay bir şekilde yazılabilir
    for (auto it = myVector.begin(); it != myVector.end(); ++it) {
        std::cout << *it << std::endl;
    }
}