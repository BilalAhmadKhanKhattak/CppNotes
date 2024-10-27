

/* 
Write a cpp program that computes and displays the charges of a patient stay in hospital 
The program should ask if the pateint was admitted as an indoor patient or outdoor patient 

1. If the pateint was an indoor patient, the following data should be entered: 
The number of days spent in the hospital 
The daily rate 
Hopital medication charges 
Charges for hopital services 

2. If the patient was an outdoor patient the following data should be entered: 
Charges for the hospital services 
Hospital medication charges 

3. The program should use two overloaded fucntions to calculate the total charges. 
One of the function should accept the arguments for the indoor pateint data, while the other function accepts the arguments for outdoor 
patient information. Both functions should return the total charges to main function 
*/


// USING CLASSES AND OBJECTS

// This Program doesn't fullfil the 3rd requirement, That's Your TEST. Ponder and Test your skills out.

#include <iostream>

using namespace std;

class Hospital {
    private: 											// Private memebrs are only accesible if called from within the Class
        int days;										// these can't be called from outside the Class
        double rate;
        double medCharges;
        double serviceCharges;
    public:
        Hospital() { 										//Constructor, Initializing the Data.
            days = 0;
            rate = 0.0;
            medCharges = 0.0;
            serviceCharges = 0.0;
        }
        void getInpatientData() {											// Requirement # 1                                
            cout << "Enter number of days spent in the hospital: ";
            cin >> days;
            cout << "Enter daily rate: $";
            cin >> rate;
            cout << "Enter hospital medication charges: $";
            cin >> medCharges;
            cout << "Enter charges for hospital services: $";
            cin >> serviceCharges;
        }
        void getOutpatientData() {											// Requirement # 2
            cout << "Enter charges for hospital services: $";
            cin >> serviceCharges;
            cout << "Enter hospital medication charges: $";
            cin >> medCharges;
        }
        void getTotalCharges() { 										// Function to calculate Total Charges use if-else statement.
            double totalCharges = 0.0;
            if (days > 0) {
                totalCharges += days * rate + medCharges + serviceCharges;
                cout << "Total charges for inpatient stay: $" << totalCharges << endl;
            } else {
                totalCharges += medCharges + serviceCharges;
                cout << "Total charges for outpatient stay: $" << totalCharges << endl;
            }
        }
};

int main() {
    Hospital obj;	// Object of the class, used t while provoking the function or something else inside the class. Can be named as you wish

    char choice;

    cout << "Was the patient admitted as an inpatient or outpatient? (I/O): ";
    cin >> choice;

    if (choice == 'I' || choice == 'i') 
	{
        obj.getInpatientData();							// Invoking to the " getinpatientData " function in the Hospital Class.
    } 
	else if (choice == 'O' || choice == 'o') 
	{
        obj.getOutpatientData();						// Invoking to the " getoutpatientData " function in the Hospital Class.
    } 
	else 
	{
        cout << "Invalid input." << endl;
        return 1;
    }

    obj.getTotalCharges();				// Invoking/Calling the " getTotalCharges " function isnide class through the object "obj "

    return 0;
}

