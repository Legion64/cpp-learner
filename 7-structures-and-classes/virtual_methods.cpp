#include <iostream>

/**
 * Virtual fonksiyonlar, kalıtımı alan sınıf içerisinde bir üst sınıfın o metodunu override edebilmesini sağlarlar.
 * Aşağıdaki örnekte olduğu gibi bir dikdörtgenin ve dairenin alanını override ederek üst sınıfın bu fonksiyonu
 * daha değişik bir çıktı ile kullanabilmesini sağlar.
 */

class Shape {
public:
    virtual double area() const {
        return 0;
    }
};

class Circle : public Shape {
public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14 * radius * radius;
    }

private:
    double radius;
};

class Rectangle : public Shape {
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const override {
        return width * height;
    }

private:
    double width;
    double height;
};

int main() {
    Circle c(5);
    Rectangle r(4, 6);

    Shape* shape = &c;
    std::cout << "Circle's area: " << shape->area() << std::endl;

    shape = &r;
    std::cout << "Rectangle's area: " << shape->area() << std::endl;

    return 0;
}