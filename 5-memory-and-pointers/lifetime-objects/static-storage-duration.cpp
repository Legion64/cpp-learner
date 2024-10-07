#include <iostream>

/**
 * Static storage duration, bir C++ uygulamasının ilk başladığı andan, uygulamanın sonlandığı noktaya kadar
 * bellekte alan ayrılan objelere denir. Global tanımlamalar, static data üyeleri ve static local değişkenler
 * bu kategoriye girerler
 */

int global_var;

class MyClass {
    static int static_var;
};

void myFunc() {
    static int local_var;
};