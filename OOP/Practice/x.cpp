#include <iostream>
using namespace std;

class Person {
    public:
        void display() {
            cout << "Hello, world";
        }
};

class Mother: virtual public Person {
    public:
};

class Father: virtual public Person {
    public:
};

class Child: public Mother, public Father {
    public:
};

int main() {
        Child d;
        d.display();
        return 0;
}