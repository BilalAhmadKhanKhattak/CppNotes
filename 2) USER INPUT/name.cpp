#include <iostream>

int main() {
    std::string name;   // here string means the user will enter a string(words) not integer(numbers)
    std::cout << "ENTER YOUR good NAME: "; // THIS ASKS THE USER FOR INPUT
    std::cin >> name; // Gets user input
    std::cout << "PEACE BE UPON YOU, Mr." << name << "!" << std::endl; // Output the input
    return 0;
}