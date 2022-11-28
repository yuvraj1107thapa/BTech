#include <iostream>
using namespace std; 
    
int main() {
    int subjects;
    float marks, total = 0.0f;
    cout << "Enter number of subjects\n";  
    cin >> subjects;  
    cout << "Enter marks of subjects\n";
    for(int i = 0; i < subjects; i++){
       cin >> marks;
       total += marks; 
    }  
    cout << "Total Marks = " << total;    
    return 0;  
}