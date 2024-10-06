#include <iostream>

/**
 * Bazen türetilen sınıfların runtime ortamında isimini ve bazı bilgilerini almamız gerekbilir.
 * Bu durumda typeid() fonksiyonu bize dinamik olarak bu bilgiyi sağlar. Diğer dillerdeki reflect'e benzer
 * işlevi vardır.
 * 
 * dynamic_casting, static_casting'e göre runtime ortamında tiplerin güvenli bir biçimde cast etmesini sağlar.
 * 
 * 
 */

namespace test {
    class Base { virtual void dummy() {} };
    class Derived1 : public Base {};
    class Derived2 : public Base {};
}

int main() {
    test::Base* base_ptr = new test::Derived1;

    /* ------------------------------------------------- */

    std::cout << typeid(*base_ptr).name() << std::endl;

    /* ------------------------------------------------- */

    test::Derived1* drv1_ptr = dynamic_cast<test::Derived1*>(base_ptr);
    if (drv1_ptr != nullptr) {
        std::cout << "Downcast to Derived1 successful\n";
    } else {
        std::cout << "Downcast to Derived1 failed\n";
    }

    /**
     * Buranın sonucu failed olacaktır. Çünkü base_ptr için Derived1'i refere etmesini istemiştik.
     */
    test::Derived2* drv2_ptr = dynamic_cast<test::Derived2*>(base_ptr);
    if (drv2_ptr != nullptr) {
        std::cout << "Downcast to Derived2 successful\n";
    } else {
        std::cout << "Downcast to Derived2 failed\n";
    }

    delete base_ptr;
    return 0;
}
