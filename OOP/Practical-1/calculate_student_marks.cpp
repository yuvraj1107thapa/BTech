#include <iostream>
using namespace std; 
    
int main() {
    int subjects;
    float marks, total = 0.0f;
    cout << "Enter number of subjects: ";  
    cin >> subjects;  
    cout << "Enter marks of subjects: ";
    for(int i = 0; i < subjects; i++){
       cin >> marks;
       total += marks; 
    }  
    cout << "Total Marks = " << total;    
    return 0;  
}