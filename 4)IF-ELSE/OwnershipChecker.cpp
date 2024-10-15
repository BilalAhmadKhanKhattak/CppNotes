#include <iostream>

int main() {
    std::string realname;  // variab to stor the input password
    std::cout << "Enter Your Password To Get Access" << std::endl; // Asks the user about the password
    std::cin >> realname; // This reads the password input

    if (realname == "bilred") {  
        std::cout << "Welcome Back, Sir" << std::endl;  // if realname is bilred, then its true
    
    } else {
        std::cout << "EWWW, GET LOST, NOW" << std::endl; // if not, this msg is printed
    }
    return 0;
}


// If you need more conditions, you can use, else if, to make more decisions