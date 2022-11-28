#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public: 
    // Non-Parameterized Constructor:
    Rectangle() {
        length = 0;
        breadth = 0;
    }

    // Parameterized Constructor:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // Copy Constructor:
    Rectangle(Rectangle& r) {
        length = r.length;
        breadth = r.breadth;
    }

    int get_length() {      
        return length;
    }

    int get_breadth() {         
        return breadth;
    }

    void set_length(int l) {   
        length = l;
    }

    void set_breadth(int b) {   
        breadth = b;
    }

    int area() {                
        return length * breadth;
    }

    int perimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    // Initializing the Non-Parameterized Constructor:
    Rectangle r1;                           // r1 is created in stack.
    // We can also create r1 as:
    // Rectangle r1();                      // in stack.
    // Rectangle *r1 = new Rectangle();     // in heap.
    // Rectangle *r1 = new Rectangle;       // in heap.
    cout << "Rectangle - r1" << "\n";
    cout << "Length: " << r1.get_length() << ", Breadth: " << r1.get_breadth() << "\n";
    r1.set_length(32);  
    r1.set_breadth(23);
    cout << "Length: " << r1.get_length() << ", Breadth: " << r1.get_breadth() << "\n";
    cout << "Area: " << r1.area() << ", Perimeter: " << r1.perimeter() << "\n\n";

    Rectangle *r2 = new Rectangle(10,20);   // r2 created in heap.
    // We can create r2 as follows:
    // Rectangle r2(10,20);                 // in stack.
    cout << "Rectangle - r2. r2's length and breadth are already set, due to Parameterized Constructor\n";
    cout << "Length: " << r2->get_length() << ", Breadth: " << r2->get_breadth() << "\n";
    cout << "Area: " << r2->area() << ", Perimeter: " << r2->perimeter() << "\n\n";
    
    // Now, if we want to copy the exact details (data member values) into another Rectangle object
    // in that case, we use the Copy Constructor as follows:
    // we will use the stack declaration:
    Rectangle r3(r1);   // all details of r1 are now copied onto r3
    cout << "Rectangle - r3 = Rectangle - r1 (Due to Copy Constructor)\n";
    cout << "Length: " << r3.get_length() << ", Breadth: " << r3.get_breadth() << "\n";
    cout << "Area: " << r3.area() << ", Perimeter: " << r3.perimeter() << "\n\n";

    // Rectangle - r4 is instantiated in the heap.
    Rectangle *r4 = new Rectangle(r1);  // address of all details of r1 are now copied into r4, since r4 is a pointer.
    cout << "Rectangle - r4 = Rectangle - r1 (Due to Copy Constructor)\n";
    cout << "Length: " << r4->get_length() << ", Breadth: " << r4->get_breadth() << "\n";
    cout << "Area: " << r4->area() << ", Perimeter: " << r4->area() << "\n\n";

    // Rectangle - r5 is instantiated in the heap.
    Rectangle *r5 = new Rectangle(*r2); // address of all details of r1 are now copied into r5, since r5 is a pointer.
    cout << "Rectangle - r5 = Rectangle - r2 (Due to Copy Constructor)\n";
    cout << "Length: " << r5->get_length() << ", Breadth: " << r5->get_breadth() << "\n";
    cout << "Area: " << r5->area() << ", Perimeter: " << r5->perimeter() << "\n\n";

    return 0;
}