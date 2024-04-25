   
// C++ Program to print the Fibonacci
// series using recursion
#include <iostream>
using namespace std;
 
// First two values
int prev1 = 1;
int prev2 = 0;
 
// Recursive function to print the
// fibonacci series
void fib(int n)
{
    if (n < 3) {
        return;
    }
    int fn = prev1 + prev2;
    prev2 = prev1;
    prev1 = fn;
    cout << fn << " ";
    return fib(n - 1);
}
 
// Function that handles the first two terms
// and calls the recursive function
void printFib(int n)
{
 
    // When the number of terms is less than 1
    if (n < 1) {
        cout << "Invalid number of terms\n";
    }
 
    // When the number of terms is 1
    else if (n == 1) {
        cout << 0;
    }
 
    // When the number of terms is 2
    else if (n == 2) {
        cout << "0 1";
    }
 
    // Number of terms greater than 2
    else {
        cout << "0 1 ";
        fib(n);
    }
    return;
}
 
// Driver code
int main()
{
    int n = 9;
 
    // Function call
    printFib(n);
    return 0;
}