#include <any>
#include <iostream>

int main() {
    // Bazı değerler tanımlıyoruz
    int x = 5;
    float y = 12.52f;
    std::string z = "Hello, World!";

    // Tipi belli olmayan bir generic pointer oluşturuyoruz
    void* void_ptr;

    // Pointer'a bir değer tanımlayıp, sonrasında static_cast ile onu int* pointer'a çeviriyoruz. Ardından da (*) ile
    // referans ettiği değeri alıyoruz.
    void_ptr = &x;
    std::cout << *(static_cast<int*>(void_ptr)) << std::endl;

    void_ptr = &y;
    std::cout << *(static_cast<float*>(void_ptr)) << std::endl;

    void_ptr = &z;
    std::cout << *(static_cast<std::string*>(void_ptr)) << std::endl;

    return 0;
}