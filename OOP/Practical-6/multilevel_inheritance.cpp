#include<iostream>
#include <string>
using namespace std;

class Employee {       
    protected:                                         
        string pname;
    public:
        int phone_no;   
        int eno;
        string ename;
};

class Manager : public Employee {
    public:
        string deptname;
        float basic_salary;
};

class Department: public Manager {
    public:
        void accept_details() {
            cout<<"\n Enter Employee No. : ";
            cin>>eno;
            cout<<"\n Enter Name : ";
            cin>>ename;
            cout<<"\n Enter Phone No. : ";
            cin>>phone_no;
            cout<<"\n Enter Department Name : ";
            cin>>deptname;
            cout<<"\n Enter Basic Salary : ";
            cin>>basic_salary;
        }
        void print_details() {
            cout<<"\n Employee No. : "<<eno;
            cout<<"\n Name : "<<ename;
            cout<<"\n Phone No. : "<<phone_no;
            cout<<"\n Department Name : "<<deptname;
            cout<<"\n Basic Salary : "<<basic_salary;
        }
};

int main() {
    Department man;
    man.accept_details();
    man.print_details();
    return 0;
}