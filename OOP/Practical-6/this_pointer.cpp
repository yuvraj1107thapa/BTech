#include<iostream>

using namespace std;

class Employee {
    private:
        string name;
        double salary;
        int age;
    public:
        Employee (string n, int a, double s) {
            name = n;
            age = a;
            salary = s;
        }

        void incrementSalary (double percentage) {
            int current_salary = this->salary;
            int increment_amount = current_salary * (percentage/100);
            this->salary = current_salary + increment_amount;
        }

        void display () {
            cout<<"Employee Name: "<<this->name<<endl;
            cout<<"Employee Age: "<<this->age<<endl;
            cout<<"Employee Salary: "<<this->salary<<endl;
        }
};

int main () {
    Employee emp_1 = Employee ("Scaler", 22, 10000);
    Employee emp_2 = Employee ("Topics", 23, 10000);
    int percentage_increment = 10; // 10%
    emp_1.incrementSalary(percentage_increment);
    emp_1.display();
    cout<<"------\n";
    emp_2.display();

    return 0;
}
