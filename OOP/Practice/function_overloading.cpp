#include <iostream>
using namespace std;

class Demo {
    public:
        // area of square
        int area(int s) {
            return s * s;
        }
        // area of rectangle
        int area(int l, int b) {
            return l * b;
        }
        // area of circle
        float area(float r) {
            return 3.14 * r * r;
        }
        //area of triangle
        double area(double b, double h) {
            return (b * h) / 2;
        }
        static int val;
        static void print() {
            cout << "Static Member function runs!" << endl;
            cout << "Value of val is " << val << endl;
        }
};

int Demo::val = 10;

int main() {
    // int s, l, b;
    // float r;
    // double bs, h;
    // cout << "Enter side of square: ";
    // cin >> s;
    // cout << "Enter length and breadth of rectangle: ";
    // cin >> l >> b;
    // cout << "Enter radius of circle: ";
    // cin >> r;
    // cout << "Enter base and height of triangle: ";
    // cin >> bs >> h;
    Demo obj1, obj2;
    // cout << "Area of square is " << obj.area(s) << endl;
    // cout << "Area of rectangle is " << obj.area(l, b) << endl;
    // cout << "Area of circle is " << obj.area(r) << endl;
    // cout << "Area of triangle is " << obj.area(bs, h) << endl;
    obj2.val = 15;
    cout << "Value of variable val is " << obj1.val << endl;
    Demo::print();
    return 0;
}