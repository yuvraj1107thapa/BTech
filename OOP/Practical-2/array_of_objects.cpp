#include <bits/stdc++.h>
#include <sstream>
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
    cin.ignore();
    getline(cin,name);
 }
 void student::display() {
     cout << name << endl;
 }
 void student::sortString() {
     sort(name.begin(), name.end());
 }

 int main() {
     cout << "Note: name should be in lowercase." << endl;
     int n;
     cout << "Enter number of students: ";
     cin >> n;
     student s[n];
     for (int i = 0; i < n; i++) {
         s[i].getdata();
     }
    cout << "After String is Sorted." << endl;
    for(int i=0;i<n;i++) {
        s[i].sortString();
    }
    for(int j=0;j<n;j++) {
        cout << "Name " <<j<<": ";
        s[j].display();
    }
    return 0;
 
}