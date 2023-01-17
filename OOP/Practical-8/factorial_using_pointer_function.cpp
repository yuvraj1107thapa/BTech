#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;
    int (*factorialPtr)(int) = factorial;  //pointer to function

    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial of " << num << " is: " << factorialPtr(num) << endl;
    return 0;
}
