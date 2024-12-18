#include <iostream>
#include <cstring>

/**
 * Rule of Five kuralı Rule of Three kuralının extend edilmiş halidir diyebiliriz. Sadece ek olarak;
 *  - Move constructor
 *  - Move assignment operator
 * ekleniyor. Bu da objenin sahipliğinin aktarılmasını sağlıyor.
 */

class RuleOfFive {
private:
    char* data;

public:
    RuleOfFive(const char* input) {
        data = new char[strlen(input) + 1];
        strcpy(data, input);
    }

    ~RuleOfFive() {
        delete[] data;
    }

    RuleOfFive(const RuleOfFive& other) {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
    }

    RuleOfFive& operator=(const RuleOfFive& other) {
        if (this != &other) {
            delete[] data;
            data = new char[strlen(other.data) + 1];
            strcpy(data, other.data);
        }
        return *this;
    }

    RuleOfFive(RuleOfFive&& other) noexcept : data(other.data) {
        other.data = nullptr;  // Kaynağı taşındı olarak işaretle
    }

    RuleOfFive& operator=(RuleOfFive&& other) noexcept {
        if (this != &other) {
            delete[] data;  // Eski kaynağı temizle
            data = other.data;
            other.data = nullptr;  // Kaynağı taşındı olarak işaretle
        }
        return *this;
    }

    void print() const {
        std::cout << (data ? data : "Moved") << std::endl;
    }
};

int main() {
    RuleOfFive a("Hello");
    RuleOfFive b = std::move(a);  // Move constructor çağrılır
    b.print();
    a.print();

    RuleOfFive c("World");
    c = std::move(b);  // Move assignment operator çağrılır
    c.print();
    b.print();

    return 0;
}
