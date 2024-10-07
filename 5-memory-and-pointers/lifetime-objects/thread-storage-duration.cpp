#include <iostream>

/**
 * Thread Storage Duration, ait olduğu threadin başlangıcından sonlanmasına kadar geçen sürede tanımlanan objelerdir.
 * Thread storage oluşturabilmek için `thread_local` keyword'unu kullanmamız gerekir.
 */

int myThread() {
    thread_local int x = 40;

    return 1;
}