#include <iostream>
using namespace std;

// Function to generate Fibonacci series using recursion
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int terms;
    cout << "Enter the number of no. for Fibonacci series: ";
    cin >> terms;
    
        cout << fibonacci(terms);
    
    return 0;
}
