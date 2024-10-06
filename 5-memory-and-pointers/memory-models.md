# Memories
## Stack Memory
Stack hafızası bir fonksiyonun içerisindeki değişkenleri, fonksiyon çıktılarının adreslerini, fonksiyon çağrılarını vb. verileri tutmakla görevlidir.

Bu bellek programcı tarafından değil runtime'da otomatik olarak yönetilen bir bellek tipidir. Otomatik yönetilmesinden kasıt, bir fonksiyon çağrısı yapıldığında, fonksiyon içerisindeki bütün değişkenler bu bellek üzerinde otomatik olarak alan ayrılır. LIFO (Last In First Out) prensibi ile çalışır.

Stack belleği sınırlı bir miktara sahiptir. Bu değeri işletim sisteminin içerisindeki bir ortam değişkeni belirler. Genelde 1MB kadar bir genişliği mevcuttur. Linux içerisinde `ulimit -s` komutu ile öğrenilebilir. Ayrıca yine `ulimit -s <amount_of_mb>` komutu ile de bu miktar değiştirilebilir.

Örneğin;
```c++
void constMultiplier() {
    int constant = 10; // constant stack'te saklanır
}
```

## Heap Memory
Bu bellekte dinamik zamanlı objeler tutulur. Bu objeler programcı tarafından `new` ve `delete` keywordleri ile oluşturulabilir ya da silinebilir (memory allocation veya deallocation işlemi).

Heap Memory, Stack Memory'e göre çok daha büyük bir havuza sahiptir. Fakat Stack Memory kadar hızlı çalışamaz.

Örnek;
```c++
void functionExample() {
    int* p = new int; // dinamik olarak heapte tanımlanır

    *p = 10;

    delete p; // heap'e tanımlanan değeri siler
}
```
