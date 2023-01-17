#include <iostream>
using namespace std;

void num(int x) {
    try {
        if(x == 1)throw x;
        else if(x == 0) throw 'x';
        else if(x < 0) throw 10.0;
    }
    catch(int x) {
        cout << "Caught an integer." << endl;
    }
    catch(char x) {
        cout << "Caugh a character." << endl;
    }
    catch(double c) {
        cout << "Caught a double." << endl;
    }
}

int main() {
    num(1);
    num(0);
    num(-1);
    return 0;
}