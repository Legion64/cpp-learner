#include<iostream>
#include<memory>

class TestClass {
public:
    TestClass() {
        std::cout << "constructor called\n";
    }
    ~TestClass() {
        std::cout << "desctructor called\n";
    }
};

/**
 * shared_ptr bellek yönteimini kendisin yapmasını sağlar. Bu, memory leakage ve thread-safe
 * bellek kullanımı gereken durumlarda belleğin otomatik olarak yönteilmesini sağlar.
 * İlk tanımlandığı andaki scope'undan çıkıldığında yani diğer bir deyişle referans counter 0'a
 * ulaştığında bellekteki objeyi temizler.
 */

int main() {

    std::shared_ptr<TestClass> shared = std::make_shared<TestClass>();

    {
        std::shared_ptr<TestClass> ptr2 = shared;

        std::cout << ptr2.use_count() << std::endl;
        /**
         * Bu scope'un ilk satırında yaptığımız tanımlama shared_ptr standart sınıfındaki
         * basic counter'ı 1 arttırdı. Bu kaç kez refere edildiğini gösterir ve 21. satırda da
         * alacağımız çıktının 2 olduğunu görebiliriz. Sadece ptr2 için değil aynı zamanda
         * shared için de değerin 2'ye çıktığını görebiliriz. Bu bellekteki tek bir alanda bu counter'ın
         * tutulduğunu bize gösterir.
         */
    }

    std::cout << shared.use_count() << std::endl;

    /**
     * 18. satırda tanımladığımız scope'un dışarısına çıktığımız için C++ otomatik olarak
     * shared_ptr içerisindeki counter'dan 1 eksiltecek fakat hala 16 satırdaki tanımlamadan
     * kaynaklı 1 count daha olduğu için objeyi bellekten temizlemeyecek.
     */

    return 0;
}

/**
 * En son 40. satırdaki scope'tan da çıkıldığında bellekteki counter 0'ı gösterecek ve bu sebeple
 * bellek yönetimi devreye girip bellekten oluşturduğumuz TestClass objesini temizleyecektir.
 * Bu akıllı bellek kullanımına bir örnektir.
 */