#include <iostream>

/**
 * Automatic Storage Duration, bir değişkenin tanımlandığı noktada bellekte alan oluşturulması için kullanılır.
 * Bellekten silinmesi için ise tanımlandığı esnada bulunan scope içerisinden çıkılması gerekir.
 * Bu objelere "stack" veya "local" de denir. Fonksiyon parametreleri veya non-static değişkenler
 * bu kategoriye girerler.
 */

void myFunc() {
    int x; // Otomatik olarak oluşturulan yani program burayı okuduğunda bellekte alan oluşturulan object.
}