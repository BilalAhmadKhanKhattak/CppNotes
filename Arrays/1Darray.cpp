// find the max in 1D array..... o bhai sab!

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {23,4,12,6,64};  // This is what we call 1D array
    int maxNum = arr[0]; // for now, I'm gonna set it to 23 (just for now) watch and learn

    // I'll use loop to find the max in the array. Loops through the array and finds the max value
    for (int i = 1; i < 5; i++) {  
        if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
    }
    cout << "Max Number in the array is: " << maxNum << endl;
    return 0;
}

// BILRED ;)
