#include <iostream>
#include <algorithm>
using namespace std;

class student {
    string name;
    public:
        void getdata(){
            cout<<"Enter the name: ";
            cin>>name;
        }
        void display(){
            cout << name << endl;
        }
        void sortString(){
            sort(name.begin(), name.end());
        }
};
 int main() {
    int n;
    cout<<"Enter no. of student : ";
    cin>>n;
    student s[n];	
    cout<<"Note: name should be in lowercase."<<endl;
    
    for(int i=0;i<n;i++) {
        s[i].getdata();
    }
    cout << "After String is Sorted." << endl;
    for(int i=0;i<n;i++) {
        s[i].sortString();
    }
    for(int j=0;j<n;j++) {
        cout <<"Name "<<j+1<<" :";
        s[j].display();
    }
    return 0;
 
}
