#include <bits/stdc++.h>
using namespace std;

class student {
    string name;
    public:
        void getdata();
        void display();
        void sortString();
 };
 void student::getdata() {
    cout<<"Enter the name: ";
    getline(cin,name);
 }
 void student::display() {
     cout << name << endl;
 }
 void student::sortString() {
     sort(name.begin(), name.end());
 }

 int main() {
    student s[2];
    for(int i=0;i<2;i++) {
        s[i].getdata();
    }
    cout << "After String is Sorted." << endl;
    for(int i=0;i<2;i++) {
        s[i].sortString();
    }
    for(int j=0;j<2;j++) {
        cout << "Name 1: ";
        s[j].display();
    }
    return 0;
 
}