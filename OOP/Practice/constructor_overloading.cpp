#include <iostream>
using namespace std;

class Demo {
    int val;
public:
    Demo() {
        val = 10;
    }
    Demo(int val) {
        this->val = val;
    }
    Demo(int val1, int val2) {
        this->val = val1 + val2;
    }
    Demo(Demo &old_obj) {
        this->val = old_obj.val;
    }
    friend void print(Demo &obj);
};

void print(Demo &obj) {
    cout << "Object value is " << obj.val << endl;
}

int main() {
    Demo d1(3, 2);
    Demo d2 = d1;
    print(d2);
    return 0;
}