#include <iostream>
using namespace std;

// Function to reverse the elements of the array
void reverse(int arr[], int n) {
    int start = 0; // Starting index
    int end = n - 1; // Ending index
    while (start <= end) {
        swap(arr[start], arr[end]); // Swap the elements at start and end
        start++; // Move start forward
        end--; // Move end backward
    }
}

// Function to print the elements of the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) { // Loop through each element in the array
        cout << arr[i] << " "; // Print the element
    }
    cout << endl; // Print a new line at the end
}

int main() {
    // Initialize array arr with 4 elements
    int arr[4] = {12, 11, 10, 9};
    // Initialize array brr with 8 elements
    int brr[8] = {1, 2, 3, 4, 7, 8, 9, 21};

    // Reverse the elements of arr
    reverse(arr, 4);
    // Reverse the elements of brr
    reverse(brr, 8);
    
    // Print the reversed arr
    printArray(arr, 4);
    // Print the reversed brr
    printArray(brr, 8);

    return 0;
}
