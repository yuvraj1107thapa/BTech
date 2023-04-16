// #include <iostream>
// using namespace std;

// class Shape {
//     public:
//         int x;
//         Shape(int x) {
//             this->x = x;
//         }
//         virtual double area(int x) = 0;
// };

// class Circle {
//     public:
//         double area(int x){
//             return (3.14 * x * x);
//         }
// };

// int main() {
//         Circle s;
//         cout << s.area(1); 
//         return 0;
// }

#include <iostream>

using namespace std;
double read_number() {
    double d;
    cin >> d;
    if(cin.fail()) {
        throw "Not a valid input";
    }
    return d;
}

double division(double a, double b) {
    if(b == 0) {
        throw "Not divisible by 0";
    }
    return a / b;
}

int main() {
    try {
        cout << "Enter a number: ";
        double d = read_number();
        cout << "Valid number!";
        double num1, num2;
        cout << "Number 1: ";
        cin >> num1;
        cout << "Number 2: ";
        cin >> num2;
        double div = division(num1, num2);
        cout << "Answer of division is" << div << endl;
        } catch(const char* e) {
        cout << e << endl;
    }
    return 0;
}





















