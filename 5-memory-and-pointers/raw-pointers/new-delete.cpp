#include <iostream>
#include <memory>

int main() {
    /**
     * new keyword'ü heap belleğinde (programcının yöntettiği bellek) programcı için bir alan tahsis eder.
     * new ile tahsis edilen bellek AÇIKÇA DELETE KEYWORDÜ BELİRTİLENE KADAR bellekte aktif durumda kalır.
     * Ne zaman delete ile tahsis edilen bellek serbest bırakılırsa o zaman bellek boşalır.
     * (Ya da uygulama sonlanır. Windows/Linux/MacOS gibi gelişmiş işletim sistemleri güçlü bellek yöntim
     * sistemi ile bu belleği siler.)
     */

    int* ptr = new int;

    *ptr = 42;

    /**
     * delete keyword'ü ise daha önce de belirttiğim gibi bellek tahsisini kaldırır ve bellekte kullanıma hazır
     * alan açar.
     */

    delete ptr;

    /**
     * new <tip>[] ve delete[] operatörleri, bellekte bir array objesi için alan tahsis eder ve kaldırır.
     */

    int n = 20;
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }

    delete[] arr;

    return 0;
}