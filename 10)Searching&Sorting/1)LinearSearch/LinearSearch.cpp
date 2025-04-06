// Linear Search is a searching algorithm that checks every element in the array until the desired element is found or the list ends.
// Maybe, this one's the easiest to understand!

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) { // this func takes three parameters
    for(int i = 0; i < size; i++) {
        if(arr[i] == key)
            return i; // Element found
    }
    return -1; // Not found
}

int main() {
    int arr[] = {10, 50, 30, 70, 20};  // an array of size 5
    int key = 30;
    int index = linearSearch(arr, 5, key);

    if(index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found!";
    
    return 0;
}
// Linear → one by one, works on any array, time-taking
// Binary → uses mid, cuts into halves, only works on sorted arrays

// BILRED ;)
