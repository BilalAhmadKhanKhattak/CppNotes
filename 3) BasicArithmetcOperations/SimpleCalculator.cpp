#include <iostream>

int main() {
// This snippet is used to ask two digits which you want to calculate
    int a, b;
    std::cout << "Enter First Digit: ";
    std::cin >> a;
    std::cout << "Enter Second DIGIT: ";
    std::cin >> b;

// Bhaijan, This is the main logic for Arithmetic Operations
    int sum = a + b; // For sum
    int multiplication = a * b; // For Multiplication
    int division = a/b;  // For Division
    int subtraction = a - b; // For Subtraction
    
// For Printing the results
    std::cout << "The Sum is: " << sum << std::endl;  // endl inserts a newline character with the output stream, means that any text following std::endl will be printed on the next line
    std::cout << "Subtraction: " << subtraction << std::endl;
    std::cout << "Multiplication: " << multiplication << std::endl;
    std::cout << "Division: " << division << std::endl;
    std::cout << "THANKS Mr. BILRED LATER! BYE" << std::endl;
    return 0;
}