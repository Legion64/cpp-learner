#include <iostream>

/**
 * Kalıtım bir sınıfın başka bir üst sınıf ile doğrudan ilişkili olduğunu bize gösterir. Bunun en güzel örneği,
 * bir arabanın aynı zamanda bir araç olmasıdır. Vehicle dediğimizde bu bir hava aracı da olabilir bir deniz aracı da.
 * Her Vehicle bir vektör doğrultusunda hareket edebilmesi için motora ihtiyaç duyar. Bu elektrikli veya içten yanmalı
 * olabilir. Bu durum fark etmeksizin, araçlar bir yöne gitmeden önce motorunu çalıştırmalıdır. Bu durumda, StartEngine
 * aslında bütün araçlar için kullanılmalıdır.
 */

class Vehicle
{
private:
    bool isRunning;

public:
    void StartEngine() {

    };
};

class Car : public Vehicle
{
public:
    void OpenTrunk() {

    };
};

class Airplane : public Vehicle
{
public:
    void EnableAP() {

    };
};

class Ship : public Vehicle
{
public:
    void Horn() {

    };
};


int main()
{
    Car c;

    c.StartEngine();
    c.OpenTrunk();
};
