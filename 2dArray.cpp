// 2D ARRAYS

// A table with rows & columns.
// Access with two indexes: array[row][column].
// Process using nested loops.

#include <iostream>
using namespace std;

int main() {
    // datatype arrayname[row size][column size]
    int matrix[2][3] = { 
    {1,2,3}, 
    {4,5,6}
    };
    // You can type the matrix in single line, but for understanding i formatted it like tha'  ;)

    // Accessing a value in array
    cout << matrix[0][1] << endl;  // prints element at row 0, column 1 (value = 2)
    cout << matrix[1][2] << endl; // prints element at row 1 and [2] means column 2 ( value = 6)

    // printing whole matrix MANUALLY
    cout << matrix[0][0] << " " << matrix[0][1] << " " << matrix[0][2] << endl;
    cout << matrix[1][0] << " " << matrix[1][1] << " " << matrix[1][2] << endl;



    // Alternatively, you can use a for loop to display full array 
    // Loop through rows
    for (int i = 0; i < 2; i++) {  
        // Loop through columns
        for (int j = 0; j < 3; j++) {  
            cout << matrix[i][j] << " ";  // Print element
        }
        cout << endl;  // Move to the next line after a row
    }
}

// Acha suno aur yaad rakho....
// when creating arrays, in array[size], size is a NATURAL number(begins from 1)
// when accessing array, such as array[index], index is a WHOLE number (begins from 0)

// BILRED ;)