
/**
 * C++'da tanımlanmamış davranış, dil kurallarının herhangi bir ihlali nedeniyle bir programın davranışının
 * tahmin edilemediği bir durumu ifade eder. İlklendirilmemiş değişkenler, ayrılmış belleğe işaretçi kullanımı,
 * sınır dışı bellek erişimi vb. gibi çeşitli faktörlerin bir sonucudur. C++ standardı bu tür durumlardaki
 * davranışı tanımlamaz, bu da derleyicinin veya çalışma zamanı sisteminin bu durumları istediği şekilde ele
 * almakta özgür olduğu anlamına gelir.
 */

int main() {
    // Tanımlanmamış değişken kullanımı
    int x;
    int y = x + 5;

    // Sınır dışı bellek erişimi
    int arr[5];
    int val = arr[5];

    // Null işaretçi dereferansı
    int *ptr = nullptr;
    int val = *ptr;

    // Sıfıra bölme
    int x = 5;
    int y = 0;
    int z = x / y;
}