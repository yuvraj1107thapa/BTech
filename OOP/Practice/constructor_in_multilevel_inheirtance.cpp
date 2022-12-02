#include<iostream>
using namespace std;

class A1 {
  public:
  A1() {
    cout << "Constructor of the base class A1 \n";
  }
};
 
class A2 {
  public:
  A2() {
    cout << "Constructor of the base class A2 \n";
  }
};
 
class S: public A1, virtual A2 {
  public:
  S(): A1(), A2() {
    cout << "Constructor of the derived class S \n";
  }
};

int main() {
  S obj;
  return 0;
}