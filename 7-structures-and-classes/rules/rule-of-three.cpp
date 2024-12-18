#include <iostream>
#include <cstring>

/**
 * Temel olarak Rule Of Three Destructor, Copy Constructor ve Copy Assignment Operator tanımlamalarından oluşur
 * Bu tanımlamalar sınıfın bellek yönteimini yaparken memory leake sebep olmamasını sağlar.
 */

class RuleOfThree {
private:
    char* data;

public:
    RuleOfThree(const char* input) {
        data = new char[strlen(input) + 1];
        strcpy(data, input);
    }

    ~RuleOfThree() {
        delete[] data;
    }

    RuleOfThree(const RuleOfThree& other) {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
    }

    RuleOfThree& operator=(const RuleOfThree& other) {
        if (this != &other) {
            delete[] data;  // Eski kaynağı temizle
            data = new char[strlen(other.data) + 1];
            strcpy(data, other.data);
        }
        return *this;
    }

    void print() const {
        std::cout << data << std::endl;
    }
};

int main() {
    RuleOfThree a("Hello");
    RuleOfThree b = a;
    b.print();

    RuleOfThree c("World");
    c = a;
    c.print();

    return 0;
}
