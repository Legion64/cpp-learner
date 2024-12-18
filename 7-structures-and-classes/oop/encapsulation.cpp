#include <iostream>
#include <string>

/**
 * C++ encapsulation'ı destekler. Bunun anlamı sınıfın özelliğine doğrudan erişimi kapatıp sadece belirlenmiş
 * fonksiyonların çağrılması durumunda tanımlama yapma veya özelliğin içeriğini alma uygulanabilir.
 * Bunun en büyük avantajı, bir özelliği dışarıdan tanımlamak istediğimizde sadece belirli şartlar altında
 * tanımlama yapılmasını sağlayabiliriz.
 * 
 * Aşağıdaki Cat sınıfından örnek verecek olursak, bir kedinin yaşı hiçbir zaman negatif bir değer olamaz
 * bu sebeple eğer kedinin yaşı 0'dan daha küçükse yani negatifse herhangi bir özellik tanımlaması yapmadan
 * işleme devam edilir. Burada duruma göre bir hata da döndürülebilir. 
 */
class Cat
{
private:
    std::string name;
    int age;

public:
    void setAge(int a)
    {
        if (a < 0) {
            return;
        }

        age = a;
    };

    void setName(std::string n)
    {
        name = n;
    }

    void meow()
    {
        std::cout << name << " meows!" << std::endl;
    };
};

int main()
{
    Cat myCat;

    myCat.setName("Loe");
    myCat.setAge(1);

    myCat.meow();
};