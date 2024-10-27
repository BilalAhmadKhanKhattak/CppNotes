
/*
CPP Program
Define a class declaration named inventory in retail store with the following members and create an object of that class in cpp

1. Private members named itemNumber, quantity, price and total cost
2. Constructor to the class that initialize item number, quantity, and price to 0
3. Public member function "get" to accept data of item number, quantity, and price
4. Public member function "Display" to calculate and print total cost of inventory
*/

#include <iostream>

using namespace std;

class Inventory {
    private:
        int itemNumber;
        int quantity;
        double price;
        double totalCost; 				// Requirement # 1
    public:
        Inventory() {					// Constructor is named same as the name of the Class, Mostly used to initialize the data of Members.
            itemNumber = 0;
            quantity = 0;
            price = 0.0;						// Requirement # 2
        }
        void get() {							// Requirement # 3
            cout << "Enter item number: ";
            cin >> itemNumber;
            cout << "Enter quantity: ";
            cin >> quantity;
            cout << "Enter price: ";
            cin >> price;
        }
        void Display() { 						// Requirement # 4
            totalCost = quantity * price;
            cout << "Item number: " << itemNumber << endl;
            cout << "Quantity: " << quantity << endl;
            cout << "Price: $" << price << endl;
            cout << "Total cost: $" << totalCost << endl;
        }
};

int main() {
    Inventory obj;						// Object of the class.
    obj.get();							// Invoking/Referring to the Get Funtion
    obj.Display();						// Invoking/Referring to the Display Fucntion.
    return 0;
}

