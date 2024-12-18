#include <iostream>
#include <string>

/**
 * C++ OOP desteklen bir dildir. Bunun anlamı gerçek hayattaki nesnelerde olduğu gibi sanal ortamda da bir
 * nesne oluşturup onun bilgilerini tanımlayabiliriz. Örneğin Human bir sınıf ise Ali bu sınıftan oluşturulmuş
 * bir örnektir. Ali'nin bir ismi, yaşı, boyu gibi özellikleri mevcuttur. İşte buna OOP denir.
 */
class Cat
{
public:
    std::string name;
    int age;

    void meow() {
        std::cout << name << " meows!" << std::endl;
    };
};


int main() {
    Cat myCat;

    myCat.name = "Leo";
    myCat.age = 1;

    myCat.meow();
};