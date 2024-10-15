// A function is basically a piece of REUSABLE CODE

#include <iostream>
int add(int a, int b) {  // look, this is a function used to sum two integers, a and b
// Now you must ask that, why using int three times? the answer is, the first int (before add) is the return type of the function, it tells the compiler
// that this function will return an integer
// Now the two 'int' after add, are the Parameter types
// a and b are the parameters (variables) that the function will use when its called
// int a means that a is expected to be of type "int" (integer), same goes with int b 
    return a + b;
}

int main() {
    int a, b;
    std::cout << "Enter Two Numbers: ";
    std::cin >> a >> b;
    
    int result = add(a, b);
    std::cout << "The sum is: " << result << std::endl;

    return 0;
}