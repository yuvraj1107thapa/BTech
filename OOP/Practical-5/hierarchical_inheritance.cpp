#include <bits/stdc++.h>  
using namespace std;  

class Parent { // Base class  
    public:  
    int a,b;   
    void Inputdata() 
    {  
        cout << "\nEnter two numbers: ";  
        cin >> a >> b;  
    }  
};  

class child1 : public Parent { //child1 is derived from class Parent  
    public:  
    void sum()  
    {  
        cout << "Sum= " << a + b; 
    } 
};  

class child2 : public Parent { //child2 is derived from class Parent 
    public:  
    void difference()  
    {  
        cout << "Difference= " << abs(a - b); 
    }  
};  

class child3 : public Parent { //child3 is derived from class Parent 
    public:  
    void multiply()  
    {  
        cout << "Product= " << a*b; 
    }  
};

int main() {  
    child1 x; 
    child2 y; 
    child3 z; 
    
    x.Inputdata(); 
    x.sum();  
    
    y.Inputdata(); 
    y.difference(); 
    
    z.Inputdata(); 
    z.multiply(); 
    
    return 0;  
}   
