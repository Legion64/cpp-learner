#include <iostream>

/**
 * Çoklu kalıtım, normal kalıtımda olduğu gibi çalışır tek fark birden fazla sınıftan kalıtım alabiliyor olmasıdır.
 */

class Vehicle
{
private:
    bool isRunning;

public:
    void startEngine() {};
};

class Aircraft
{
public:
    void setThrottle() {};
    void enableAP() {};
};

class Car : public Vehicle
{
public:
    void openTrunk() {};
};

class Airliner : public Vehicle, public Aircraft
{
};

class CargoPlane : public Vehicle, public Aircraft
{
};

class Ship : public Vehicle
{
public:
    void horn() {};
};

int main()
{
    Car c;

    c.startEngine();
    c.openTrunk();

    CargoPlane cp;

    cp.startEngine();
    cp.setThrottle();
    cp.enableAP();
};
