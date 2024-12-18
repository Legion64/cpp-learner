#include <iostream>
using namespace std;

/** 
 * struct'lar değişkenleri ve fonksiyonları kabul eden bir yapıdır. Önce tipi sonra ismi yazılarak 
 * oluşturulurlar. class ise struct ile bire bir aynı işlevi gerçekleştirebilir. 
 * Aralarındaki en temel fark ise, class by default private ve struct by default public olarak gelmektedir.
 * 
 * struct daha çok basit veri kümelerini birleştirmek için kullanılırken class daha kompleks işlemleri 
 * gerçekleştirmek konusunda yardımcı olur.
 */

struct StructExample {
    int x;
    void display() { cout << "StructExample x: " << x << endl; }
};

class ClassExample {
    int y;  // Private by default
public:
    void setY(int val) { y = val; }
    void display() { cout << "ClassExample y: " << y << endl; }
};

int main() {
    StructExample s;
    s.x = 10;
    s.display();

    ClassExample c;
    c.setY(20);
    c.display();

    return 0;
}
