#include <iostream>
#include <string>
#include <exception>

double readNumber() {
    double number;
    std::cin >> number;
    if (std::cin.fail()) {
        throw "Invalid input";
    }
    return number;
}

double divide(double a, double b) {
    if (b == 0) {
        throw "Cannot divide by zero";
    }
    return a / b;
}

int main() {
    try {
        std::cout << "Enter first number: ";
        double a = readNumber();
        std::cout << "Enter second number: ";
        double b = readNumber();
        double result = divide(a, b);
        std::cout << "Result: " << result << std::endl;
    } catch (const char* e) {
        std::cout << e << std::endl;
    }
    return 0;
}
