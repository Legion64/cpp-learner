#include <iostream>
#include <string>

/**
 * std::string gibi kütüphaneler rule of three veya rule of five gibi özellikleri daha öncesinden implemente
 * etmiş olurlar. Bu sayede bizim tekrar tekrar kaynak yöntimini sağlamak amaçlı kurallara başvurmamıza
 * gerek kalmaz.
 */

class RuleOfZero {
private:
    std::string data;  // std::string kaynak yönetimini otomatik yapar

public:
    RuleOfZero(const std::string& input) : data(input) {}

    void print() const {
        std::cout << data << std::endl;
    }
};

int main() {
    RuleOfZero a("Hello, Rule of Zero!");
    a.print();

    RuleOfZero b = a;  // Copy constructor otomatik çalışır
    b.print();

    RuleOfZero c("World");
    c = b;  // Copy assignment operator otomatik çalışır
    c.print();

    return 0;
}
