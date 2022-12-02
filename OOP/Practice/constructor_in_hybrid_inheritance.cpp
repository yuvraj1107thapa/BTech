#include<iostream>
using namespace std;

class A {
	public:
		A() {
			cout << "Base class A constructor \n";
		}
};

class B: public A {
	public:
		B() {
			cout << "Class B constructor \n";
		}
};

class C: public B {
	public:
		C() {
			cout << "Class C constructor \n";
			
		}
};

class D {
    public:
        D() {
            cout << "Class D constructor \n";
        }
};

class E: public C, public D {
    public:
        E() {
            cout << "Class E construcotr \n";
        }
};

int main() {
	E obj;
	return 0;
}
