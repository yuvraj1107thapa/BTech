#include <iostream>
using namespace std;

class Statico {
    static int number;
    public:
    static void print_number() {
        cout << "The number is " << number << endl;
    }
};
int Statico::number=25;

int main() {
    Statico S; 
    S.print_number(); 
    return 0;
}
