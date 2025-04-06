// Binary Search cuts the array in half each time to find the target.
// Only works on sorted arrays.
// Faster than Linear Search.

// Binary search is a super-efficient algorithm used to find the position
// of a target element in a sorted array. Unlike linear search,
// which examines every element one by one, binary search divides the search range in half with each step.

#include <iostream>
using namespace std;

// Function to perform Binary Search
int binarySearch(int arr[], int size, int key){
    int low = 0, high = size -1; // Set initial search boundaries

    while(low <= high) {  // Searches whole the range is valid...
        int mid = (low + high ) / 2; // find the middle index

        if (arr[mid] == key) {  // if element is found at mid, return index
            return mid;
        } else if (arr[mid] < key){ 
            low = mid + 1; // this one searches right half
        }
        else {
            high = mid - 1; // searches left half
        }
    }
    return -1; // not found....
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // must be sorted
    int key = 30;                      // element we want to find
    int index = binarySearch(arr, 5, key); // Calls the binarySearch function

    if(index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found!";
    
    return 0;
}

// Linear → one by one, works on any array, time-taking
// Binary → uses mid, cuts into halves, only works on sorted arrays

// BILRED BHAI ;)
// https://github.com/BilalAhmadKhanKhattak
