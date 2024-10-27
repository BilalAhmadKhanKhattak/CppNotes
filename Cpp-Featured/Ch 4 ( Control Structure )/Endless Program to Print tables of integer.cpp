

// CPP Program
// Printing Table of Integers 
// Program Ends when zero in Entered.


#include <iostream>
using namespace std;

int main() {
    int x, y;

    while (true) {
        cout << "Enter a positive integer (or zero to exit): ";
        cin >> x;

        // Check if the user wants to exit
        if (x == 0) {
            cout << "Program terminated." << endl;
            break; // Exit the loop if zero is entered
        }

        // Validate the input
        if (x > 0) {
            // Print the multiplication table for the given positive integer
            for (y = 0; y <= 10; y++) {
                cout << x << " * " << y << " = " << x * y << endl;
            }
        } else {
            cout << "You entered an invalid number." << endl; // Handle invalid input
        }
    }

    return 0; // Indicate successful completion
}

