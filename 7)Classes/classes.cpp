// A class in C++ is like a blueprint for creating oBjects. It allows you to group varIabLes (called data members) 
// and functions (called member functions) that opeRate on thE Data into one entity. 
// your example, the Employee class is a blueprint for creating employee objects.
// In some words, Classes are the cornerstone of Object Oriented Programming


#include <iostream>

// this class holds employee data: name, id and salary
class Employee {
public: // this public means this class can be accessed globally
    std::string name;   // this name is a string
    int id;             // id is integer
    double salary;      // here, double, might be a new thing for u, double is a data type used to represent floating-point numbers,
                        // which are numbers that can have decimal points

    // KEY QUESTION; WHAT'S THE DIFFERENCE BETWEEN double AND float
    // double TAKES UP 8 BYTES(64 BITS) OF MEMORY, WHEREAS A float USUALLY TAKES 4 BYTES (32 BITS).
    // THIS ALLOWS double TO HOLD NUMBERS WITH A HIGHER DEGREE OF PRECISION
    
// Function to set employee details
    void setDetails(std::string employeeName, int employeeId, double empSalary){  
    // in cpp, void is return type that indicates a function does not "return" a value
    // It’s commonly used when you want to perform an action (like printing to the console or setting values), 
    // but you don’t need the function to give you any data back.

        name = employeeName;
        id = employeeId;
        salary = empSalary;
    }

// Function to display employee details
    void displayDetails(){
        std::cout << "Employee ID: " << id << std::endl;
        std::cout << "Employee Name: " << name << std::endl;
        std::cout << "Employee Salary: $" << salary << std::endl;
        std::cout << "-------------------" << std::endl;

    }
};  // Do u know why here's this semicolon? 
// Answer: to end the class definition

int main() {
    const int companySize = 3; // Let's say, there are 3000 employees in Bilred's Corporation, the const int companySize = 3 defines a constant variable companySize with value of 3
    Employee employees[companySize];  // This is the array of employee objects, theis will store the details of all employees in ur program
    // You should think why "Employee" here? answer is, we are calling the Employee class!

    // Details for each employee
    employees[0].setDetails("AIZAZ", 101, 40000.0);
    employees[1].setDetails("Talal", 102, 47000.0);
    employees[2].setDetails("Shadows", 103, 39000.0);

    // Displaying the details of all employees
    std::cout << "COMPANY'S GREAT PEOPLE'S INFORMATION:" << std::endl;
    std::cout << "----------------------------" << std::endl;

    for (int i = 0; i < companySize; i++) {
        employees[i].displayDetails();
    }
    return 0;
}