#include <iostream>
using namespace std;

class Shape {
    public:
        int area;
        Shape() {
            area = 0;
        }
        Shape(int i) {
            area = i;
        }
        friend Shape operator*(Shape, Shape);
};

Shape operator *(Shape obj1, Shape obj2) {
        Shape obj3;
        obj3.area = obj1.area * obj2.area;
        return obj3;
}

int main() {
        Shape obj1(10);
        Shape obj2(10);
        Shape obj3 = obj1 * obj2;
        cout << obj3.area << endl;

        return 0;
}