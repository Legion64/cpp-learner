#include <iostream>

using namespace std;

int main() {
    // AND Operator (&&)
    int a = 5, b = 10;
    if (a > 0 && b > 0) {
        cout << "Her iki değer de pozitif." << endl;
    }

    // OR Operator (||)
    int a = 5, b = -10;
    if (a > 0 || b > 0) {
        cout << "İkisinden herhangi birisi pozitif" << endl;
    }

    // NOT Operator (!)
    int a = 5;
    if (!(a < 0)) {
        std::cout << "Değer negatif değil." << std::endl;
    }

    return 0;
}
