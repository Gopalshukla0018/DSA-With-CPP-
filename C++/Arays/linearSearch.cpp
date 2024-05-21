#include <iostream>
using namespace std;

int search(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) { // Loop through each element in the array
        if (arr[i] == key) { // Check if current element is equal to the key
            return i; // If found, return the index
        }
    }
    return -1; // If not found, return -1
}

int main() {
    int arr[10] = {2, -2, 8, 90, 22, 23, 24, 71, 13, 1}; // Initialize array with 10 elements

    cout << "Enter the element to search for" << endl;
    int key;
    cin >> key; // Take input from user for the key to search
    int index = search(arr, 10, key); // Call search function
    if (index != -1) {
        cout << "Key is present at index " << index << endl; // If index is not -1, print the index
    } else {
        cout << "Key is absent" << endl; // If index is -1, print key is absent
    }

    return 0;
}
