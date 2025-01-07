
#include <iostream>

/**
 * Erişim ihlali, bir programın hafızasına izinsiz erişim yapılması durumunda oluşan bir hata türüdür.
 * Örneğin, null bir pointer'ı dereference etmek, bir dizinin sınırlarını aşmak gibi durumlar erişim ihlali
 * hatasına yol açabilir. Veya, sistem tarafından boşaltılmış bir bellek alanına erişim yapmak da erişim ihlali
 * hatasına yol açar.
 * 
 * Microsoft Visual Studio, Valgrid ve AddressSanitizer gibi programlar erişim ihlali hatalarını tespit etmek için
 * kullanılan debugging araçlarıdır.
 */

int main() {
    // Null pointer'ı derefere etmeye çalışıyoruz. Erişim ihlali hatası alacağız.
    int *p = nullptr;
    int x = *p;

    // Bir dizinin sınırlarını aşmaya çalışıyoruz. Yine erişim ihlali ile sonuçlanacak.
    int arr[5] = {1, 2, 3, 4, 5};
    int y = arr[5];

    // Daha önce tanımlanmış fakat sonrasında silinmiş bir bellek alanına erişim yapmaya çalışıyoruz.
    int* p2 = new int[10];
    delete[] p2;
    p2[3] = 42;
}