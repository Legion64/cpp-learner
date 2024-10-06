#include <iostream>

/**
 * Pointerlar bir değişkenin bellekteki adresini tutmak için kullanılır. Bu güçlü bir bellek yöntemini bize sunar.
 * Örneğin bir fonksiyon parametre olarak bir değişkeninin pointer'ını isterse bu, o fonksiyonun değişkeni
 * direkt olarak bellekte değiştireceği, bellekte yeni bir alan açmayacağını gösterir.
 */

int sum(int a, int b) {
    return a + b;
}

int main() {
    // Bir pointer tanımlayabilmek için (*) operatörü kullanılır. (&) işareti ise değişkenin bellek adresini verir.
    int num = 23;
    int* num_ptr = &num;

    // Eğer pointer'ı alınan değişkenin bellekteki değerine erişmek istiyorsak yine (*) işaretini kullanabiliriz.
    int value = *num_ptr;

    // Bir fonksiyonun pointer'ını almak istiyorsak;
    int (*sumptr) (int, int) = sum;

    // Pointer'ını aldığımız fonksiyonu kullanmak istediğimizde ise basitçe pointer ismini vererek kullanabiliriz;
    std::cout << sumptr(20, 30);
}
