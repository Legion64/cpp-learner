#include <iostream>
#include <cstdlib>

void some_function() {
    // Some code here...

    if (true /*some error condition*/) {
        std::cout << "An error occurred." << std::endl;
        std::exit(1);
    }

    // More code here...
}

int main() {
    some_function();

    // Some other code here...

    return 0; // Successful execution
}