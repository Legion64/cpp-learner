/**
 * C++'da birden fazla tür dönüşümü vardır. Bu tür dönüşümleri şu şekilde sıralayabiliriz:
 * - C-style cast: (type)expression
 * - static_cast: static_cast<type>(expression)
 * - dynamic_cast: dynamic_cast<type>(expression)
 * - const_cast: const_cast<type>(expression)
 * - reinterpret_cast: reinterpret_cast<type>(expression)
 */

#include <iostream>
#include <vector>

int main() {
    /**
     * C-style cast, C dilindeki tür dönüşümlerini gerçekleştirmek için kullanılır. C-style cast, derleyiciye
     * tür dönüşümü yapmasını söyler fakat bu dönüşümün güvenli olup olmadığını kontrol etmez. Bu nedenle, C-style
     * cast kullanırken dikkatli olunmalıdır.
     */

    double myDouble = 3.14;
    int myInt = (int)myDouble;

    /**
     * static_cast, C-style cast'in yerine C++'da kullanılan bir tür dönüşüm operatörüdür. static_cast, tür
     * dönüşümünün güvenli olup olmadığını kontrol eder ve güvenli olmayan dönüşümleri engeller. static_cast, genellikle
     * genişletici dönüşümler için kullanılır. Derleme zamanında tür dönüşümü yapar.
     */

    int a = 10;
    float b = static_cast<float>(a);

    /**
     * dynamic_cast, C++'da kullanılan bir tür dönüşüm operatörüdür. dynamic_cast, genellikle nesne tabanlı programlamada 
     * kullanılan polimorfizm işlemlerinde kullanılır.
     */

    class Base {
    public:
        virtual ~Base() = default;
    };
    class Derived : public Base {};

    Base* base_ptr = new Derived();
    Derived* derived_ptr = dynamic_cast<Derived*>(base_ptr);

    /**
     * reinterpret_cast, C++'da kullanılan bir tür dönüşüm operatörüdür. reinterpret_cast, bir türü başka bir türe
     * dönüştürürken, türler arasında hiçbir ilişki olmadığını varsayar. Bu nedenle, reinterpret_cast, genellikle
     * güvenli olmayan tür dönüşümleri için kullanılır.
     */

    int* a = new int(42);
    long b = *reinterpret_cast<long*>(a);

    /**
     * const_cast, bir değişkenin const niteliğini kaldırmak için kullanılır. Genellikle önerilmez çünkü const_cast
     * kullanımı, programın davranışını değiştirebilir ve hatalara yol açabilir.
     */

    const int a = 10;
    int* ptr = const_cast<int*>(&a);
    *ptr = 20;
}