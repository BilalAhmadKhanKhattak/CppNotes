// In C++, vectors are dynamic arrays provided by the Standard Template Library (STL). 
// They can grow or shrink in size at runtime, making them much more flexible than regular arrays.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;

    
    numbers.push_back(10); // adds 10 to the end
    numbers.push_back(20); // adds 20 to the end
    numbers.push_back(30); // adds 30 to the end
    
    cout << numbers.size() << endl; // returns the number of elements

    numbers.pop_back(); // removes the last element
    
    // Accessing elements
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }

    return 0;
}

// Useful Methods:
// Method	        Description
// push_back(x)	    Adds element x to the end
// pop_back()	    Removes last element
// size()	        Returns number of elements
// empty()	        Returns true if vector is empty
// clear()	        Removes all elements
// at(index)	    Safe access to element at index
// begin(), end()	Iterators for looping