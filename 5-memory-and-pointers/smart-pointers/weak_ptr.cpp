#include <iostream>
#include <memory>

/**
 * weak_ptr'ın bir objenin yaşam süresinden haberi olmaz. Sadece onu referans gösterir ve pointer count'unu
 * arttırmaz. Bu durum sınıfların birbirini refere etmesi durumunda sonsuz döngüye girmesini
 * engellemesini sağlar. Bu da bellek kullanımı açısından oldukça verimli bir yöntem sunar.
 */

class TestClass {
public:
    void do_something() {
        std::cout << "Hello, World!" << "\n";
    }
};

int main() {
    std::weak_ptr<TestClass> weak;

    {
        std::shared_ptr<TestClass> shared = std::make_shared<TestClass>();
        weak = shared;

        if (auto sharedFromWeak = weak.lock()) {
            sharedFromWeak->do_something();

            std::cout << "Shared uses count: " << sharedFromWeak.use_count() << "\n";
        }
    }

    if(auto sharedFromWeak = weak.lock()) {
        /**
         * Bu kısımda lock atıp objeyi kontrol ediyoruz. Fakat bir önceki scope içerisinde shared
         * tanımlandığı ve scope'tan çıkınca da sonlandığı için tekrar lock attığımızda
         * objeyi bulamıyor ve null dönüyor bu da else içerisine girmesine sebep oluyor.
         */
    } else {
        std::cout << "Object has been destroyed\n";
    }

    return 0;
}