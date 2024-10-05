#include <iostream>
#include <climits>

int main() {
    // Bitwise operatörleri bir integer verinin (string için ascii karşılığı integer de olabilir) bitlerinin
    // Low-level düzeyde değiştirilebilmesini sağlar. Bu manipülasyon kriptografi gibi alanlarda sıklıkla kullanılır.

    // Bitwise AND (&)
    int num1 = 5 & 3; // Bunun anlamı 5 değerinin bit karşılığı ile 3 değerinin bit karşılığının bit'e bit eşleştirilmesidir.
    /**
     * Örneğin;
     * 3 = 0000 0011
     * 5 = 0000 0101
     *
     * Eğer bu bitleri karşılıklı olarak kontrol edersek aşağıdaki gibi bir sonuç çıkar
     *
     * 3 = 0000 0011
     * 5 = 0000 0101
     * -------------
     * 1 = 0000 0001
     */

    // Bitwise OR (|)
    int num2 = 5 | 3; // Bitwise AND operatörüne çok benzer fakat bu sefer karşılıklı kontrolde herhangi bitinde 1 varsa kabul eder
    /**
     * Örneğin;
     * 3 = 0000 0011
     * 5 = 0000 0101
     * 
     * Eğer bu bitleri karşılıklı olarak kontrol edersek aşağıdaki gibi bir sonuç çıkar
     * 
     * 3 = 0000 0011
     * 5 = 0000 0101
     * -------------
     * 7 = 0000 0111
     */

    // Bitwise XOR (^)
    int num3 = 5 ^ 3; // XOR 1 - 1 veya 0 - 0 olan bitlerde 0 olmasını fakat 1 - 0 veya 0 - 1 eşleşmesinde 1 vermesini sağlar
    /**
     * Örneğin;
     * 3 = 0000 0011
     * 5 = 0000 0101
     * 
     * Eğer bu bitleri karşılıklı olarak kontrol edersek aşağıdaki gibi bir sonuç çıkar
     * 
     * 3 = 0000 0011
     * 5 = 0000 0101
     * -------------
     * 6 = 0000 0110
     */

    // Bitwise NOT (~)
    int num4 = ~5; // NOT kapısı ise verilen integer değerin bitlerini tam tersine çevirir.
    /**
     * Örneğin;
     * 5 = 0000 0101
     * 
     * Eğer bu bitleri karşılıklı olarak kontrol edersek aşağıdaki gibi bir sonuç çıkar
     * 
     *  5 = 0000 0101
     * --------------
     * -6 = 1111 1010
     * 
     * Burada 8-bit integer üzerinden işlem yapıyormuş gibi davranırsak son bit işaret belirtecektir.
     * 1 değeri (-), 0 değeri (+) işaret belirtecektir. 
     * 
     * 8-bit integerda son bit işaret belirttiği için geri kalan 7 bitin decimal toplamı 127 eder
     * 
     * +127 ve -127 yani toplamda 254 ve 0 (sıfır) değerini de katarsak 255 eder. Bu da 8-bit integer'ın maximum boyutunu verir.
     * 
     */

    // Bitwise Left Shift (<<)
    int num5 = 5 << 1; // 5 sayısının bitlerini verilen miktar kadar sola kaydırır.
    /**
     * Örneğin;
     * 5 = 0000 0101
     * 
     * Eğer bu bitleri karşılıklı olarak kontrol edersek aşağıdaki gibi bir sonuç çıkar
     * 
     * 10 = 0000 1010
     */

    // Bitwise Right Shift (>>)
    int num6 = 5 >> 1; // 5 sayısının bitlerini verilen miktar kadar sağa kaydırır.
    /**
     * Örneğin;
     * 5 = 0000 0101
     * 
     * Eğer bu bitleri karşılıklı olarak kontrol edersek aşağıdaki gibi bir sonuç çıkar
     * 
     * 2 = 0000 0010
     */

    return 0;
}