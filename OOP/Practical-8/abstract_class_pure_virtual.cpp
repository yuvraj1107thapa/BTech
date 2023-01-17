#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0; // pure virtual function
};

class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h) {
        base = b;
        height = h;
    }

    double area() {
        return 0.5 * base * height;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double area() {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double area() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Triangle t(3, 4);
    Rectangle r(5, 6);
    Circle c(7);

    cout << "Area of triangle: " << t.area() << endl;
    cout << "Area of rectangle: " << r.area() << endl;
    cout << "Area of circle: " << c.area() << endl;

    // Shape *shapes[3] = {&t, &r, &c};

    // for (int i = 0; i < 3; i++) {
    //     cout << "Area of shape " << i + 1 << ": " << shapes[i]->area() << endl;
    // }

    return 0;
}
