#include <iostream>

/**
 * 
 */

int main() {
    int* int_var = (int*) malloc(sizeof(int));

    *int_var = 2;

    std::cout << *int_var;

    // -----------------------------------------------------

    

    return 0;
}