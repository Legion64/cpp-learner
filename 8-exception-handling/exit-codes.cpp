#include <iostream>

/**
 * Çıkış kodları, programın çalışma zamanında oluşabilecek hatanın ne olduğunu programın çalışması sonlandığında
 * bir çıkış kodu ile belirtmek için kullanılır. 
 * 
 * 0, çıkış kodu olarak kullanılan en yaygın değerdir ve genellikle programın başarılı bir şekilde çalıştığını
 * belirtir. Diğer çıkış kodları ise programın çalışma zamanında oluşan hataları belirtmek için kullanılır.
 * Her programın kendi çıkış kodları olabilir fakat genellikle aşağıdaki değerler kullanılır:
 *  - 0: Program başarılı bir şekilde çalıştı.
 *  - 1: Genel hata durumu.
 *  - 2: Kullanıcı tarafından yanlış bir komut satırı argümanı girildi.
 */

int main() {
    // Some code here...

    if (true /*some error condition*/) {
        std::cout << "An error occurred." << std::endl;
        return 1;
    }

    // More code here...

    if (true /*another error condition*/) {
        std::cout << "Another error occurred." << std::endl;
        return 2;
    }

    return 0; // Successful execution
}