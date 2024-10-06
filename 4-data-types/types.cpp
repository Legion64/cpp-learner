#include <iostream>

int main() {
    // Integer (int)
    int num = 42;

    // Floating-Point (float, double)
    float pi = 3.14f;
    double pi_high_precision = 3.1415926535; // double | high memory consumption, more floation-points

    // Character (char)
    char letter = 'A';

    // Boolean (bool)
    bool is_cpp = true;

    // --------------------------------------------
    // Derived Data Types
    // 
    // Bu veri tipleri diğer temel veri tiplerinden türetilmiş veri tipleridir. 
    // --------------------------------------------

    // Arrays
    int numbers[5] = {1, 2, 3, 4, 5};

    // Pointers
    int num = 42;
    int* pNum = &num;

    // References
    int num = 42;
    int& numRef = num;

    // --------------------------------------------
    // User-Defined Data Types
    // 
    // Bu veri tipleri kullanıcının tanımlayabildiği veri tipleridir.
    // --------------------------------------------

    // Structures (struct)
    struct Person {
        std::string name;
        int age;
        float height;
    };

    Person p1 = {"John Doe", 30, 5.9};

    // Classes (class)
    class Person {
    public:
        std::string name;
        int age;

        void printInfo() {
            std::cout << "Name: " << name << ", Age: " << age << std::endl;
        };
    };

    Person p1;
    p1.name = "John Doe";
    p1.age = 30;

    // Unions (union)
    union Data {
        int num;
        char letter;
        float decimal;
    };

    Data myData;
    myData.num = 42;

    return 0;

    /**
     * Uyarı:
     * 
     * union ile struct arasındaki temel fark, struct'ın içerisindeki elemanların toplamı kadar bellekte yer kaplıyor,
     * fakat union'un sadece elemanlardan en büyüğü kadar yer kaplıyor olmasıdır.
     * 
     * Örnek olarak, struct içerisinde int, float ve char'dan oluşan bir yapı varsa toplamda 9 byte'lık bir alan kaplar
     * Fakat union ile, en büyük eleman 4 byte olacağı için sadece 4 bytelık alan kaplar.
     * Bu da eski verilerin silinip boşaltılan alana yeni verinin yazılacağı anlamı taşır.
     */
}