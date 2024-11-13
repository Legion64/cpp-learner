#include <iostream>
#include <memory>

/**
 * unique_ptr, shared_ptr'a göre sadece 1 adet referansın bilgisini tutabilir. İkinci bir referans
 * tanımlanmaya çalışırsa bu reddedilecek ve compile time'da hata mesajı alınacaktır.
 * Öte yandan ikinci bir değeri alamasa da sahiplik el değiştirebilir. Bunun için de basitçe
 * std::move() metodu kullanılır.
 * 
 * unique_ptr'da shared_ptr gibi bellek yöntiminde bize yardımcı olur. Scope bittiğinde obje sonlanır.
 */

int main() {

    /**
     * Yeni bir unique_ptr oluşturmak için aşağıdaki adımları izleyebiliriz.
     */
    std::unique_ptr<int> p1(new int(5));
    std::unique_ptr<int> p2 = std::make_unique<int>(10); // C++14 sonrasında bu kullanım öneriliyor

    std::cout << *p1 << ", " << *p2 << std::endl;

    /**
     * Sahipliği transfer etmek için daha önce de söylediğim gibi std::move() metodunu kullanırız.
     * Aşağıdaki örnekte p1 unique_ptr'ının sahipliği p2'ye geçti. Böylece p1'in referans gösterdiği değer
     * yaşamını sürdürürken p2 unique_ptr'ının değeri bellekten silindi ve yerine 5 yazıldı.
     */

    p2 = std::move(p1);

    std::cout << *p2 << ", " << *p2 << std::endl;


    /**
     * Custom Deleter: Eğer bir unique_ptr scope dışına çıkarak sonlanacaksa yani bellekten silinmek isteniyorsa
     * bunu özel bir silici ile de sağlayabiliriz. Böylece silinmeden önce yapmak istediğimiz farklı işlemler
     * bulunuyorsa bunları da yapabiliriz.
     */

    struct CustomDeleter
    {
        void operator()(int* ptr) {
            std::cout << "Deleting Pointer" << std::endl;
            
            delete ptr;
        }
    };

    std::unique_ptr<int, CustomDeleter> p3(new int(20));

    std::cout << *p3 << std::endl;

    return 0;
}