// THis simple program will ask the user, number of students, its grades, and then, it give the average of the grades of all student

#include <iostream>

int main() {
    int numberOfStudents; // to store the number of students
    std::cout << "Enter The Number Of Students: ";
    std::cin >> numberOfStudents;


    // Creating an array to hold the Grades
    double grades[numberOfStudents];  // take note of the brackets here, matlab brackets par bohat dehan dijye ARRAYS mein


    // Input Grades
    for (int i = 0; i < numberOfStudents; i++) { 
        std::cout << "Enter Grade For Student " << (i + 1) << ": ";
        std::cin >> grades[i]; // this will store each grade in the array
    }

    // Calculate the average grade
    // (average grade is the Sum of all total grades, divided by the total number of results)
    // for example, if u have grades 80, 90, 100, the avg would be
    // (80 + 90 + 100) / 3 = 90

    double sum = 0;
    for (int i = 0; i < numberOfStudents; i++) {
        sum += grades[i]; // add each grade to the sum
    }
    double average = sum / numberOfStudents; // this formula willl calculate the avg

    // Displaying the grades and average
    std::cout << "\nStudents' Grades: " << std::endl;
    for (int i = 0; i < numberOfStudents; i++) {
        std::cout << "Student " << (i + 1) << ": " << grades[i] << std::endl; // Print Each Grade
    }

    std::cout << "Average Grade: " << average << std::endl;
    return 0;
    

}