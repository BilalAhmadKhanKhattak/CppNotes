

// CPP program 
// Prints series of special character according to the number of rows entered by user
// Using pointers


#include <bits/stdc++.h>

using namespace std;

// Function to print a right-angled triangle pattern of '#' ( PRinting Series )

void pat(int x)									// Takes an integer x as an argument	
{  								
    for (int r = 1; r <= x; r++) 				// Loop through each row
	{  			
        for (int c = 1; c <= r; c++) 			// Loop to print '#' for the current row
		{  		
            cout << "#";  						// Print '#' character
        }
        cout << endl;  							// Move to the next line after printing the current row
    }
}

int main() {
    int r;  									// Variable to store the number of rows

    // Prompt user for input
    cout << "Enter the number of rows: ";
    cin >> r;  									// Read the number of rows from user input

    int *Pr = &r;  								// Create a pointer that points to the address of r

    // Call the pat function, dereferencing the pointer to get the value of r
    
    pat(*Pr);  									// This passes the value of r to the function

    return 0;
}

