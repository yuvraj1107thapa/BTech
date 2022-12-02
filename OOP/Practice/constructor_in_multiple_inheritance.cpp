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

int main() {
	C obj;
	return 0;
}
