#include <iostream>

int main() {
    int num = 10;
    int* pointer = &num;  // declares a pointer that holds the address of 'num'

    std::cout << "value of num: " << num << std::endl;
    std::cout << "Address of num: " << &num << std::endl;
    std::cout << "Value of pointer ptr: " << pointer << std::endl; // prints the address 'num' (same as above)
    std::cout << "Value at the address stored in ptr: " << *pointer << std::endl; // prints 10, dereferencing the pointer

    return 0;
}