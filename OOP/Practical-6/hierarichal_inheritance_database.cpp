#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;

class Staff {
    private:
        string name;
        int code;
    public:
        void getstaff() {
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter code: ";
            cin>>code;
        }
        void showstaff() {
            cout<<"name: "<<name<<endl;
            cout<<"code: "<<code<<endl;
        }
};

class Teacher: public Staff {
        private: 
            string subject, publication;
        public: 
            void getteacher() {
                getstaff();
                cout<<"Enter subject: ";
                cin>>subject;
                cout<<"Enter publication: ";
                cin>>publication;
            }
            void showteacher() {
                showstaff();
                cout << "Subject : " << subject << endl;
                cout<<"publication: " << publication << endl;
                cout << endl;
        }

};

class Officer: public Staff {
    private: char grade;
    public: 
        void getofficer() {
            getstaff();
            cout<<"Enter grade: ";
            cin>>grade;
        }
        void showofficer() {
            showstaff();
            cout<<"grade: "<<grade<<endl;
            cout << endl;
        }
};

class Typist: public Staff {
    private:float speed;
    public: void gettypist() {
        getstaff();
        cout<<"Enter speed: ";
        cin>>speed;
    }
    void showtypist() {
        showstaff();
        cout<<"speed: "<<speed<<endl;
    }
};

class Regular: public Typist {
        private: int salary;
        public: 
            void getregular() {
                gettypist();
                cout<<"Enter salary: ";
                cin>>salary;
            }
        void showregular() {
            showtypist();
            cout<<"salary: "<<salary<<endl;
            cout << endl;
        }
};

class Casual: public Typist {
    private: int wage;  
    public: 
        void getcasual() {
            gettypist();
            cout<<"Enter daily wage: ";
            cin>>wage;
        }
        void showcasual() {
            showtypist();
            cout<<"wage: "<<wage<<endl;
            cout << endl;
        }
};

int main() {
        Teacher t;
        Officer o;
        Regular r;
        Casual c;
        cout<<"ENTER DETAILS OF EMPLOYEES: "<<endl;
        cout << "-----------------------------------" << endl;
        cout<<"TEACHER:"<<endl;
        t.getteacher();
        cout << endl;

        cout<<endl<<"OFFICER: "<<endl;
        o.getofficer();
        cout << endl << endl;

        cout << "TYPIST Details: " << endl;
        cout<<"REGULAR TYPIST: "<<endl;
        r.getregular();
        cout<<endl<<"CASUAL TYPING: "<<endl;
        cout << "Casual typing: " << endl;
        c.getcasual();

        cout << endl << "DISPLAY DATABASE DETAILS OF EMPLOYEES: " << endl;
        cout << "------------------------------------" << endl;
        cout << "TEACHER DETAILS: " << endl;
        t.showteacher();
        cout << "OFFICER DETAILS: " << endl;
        o.showofficer();
        cout << "REGULAR TYPIST DETAILS: " << endl;
        r.showregular();
        cout << "CASUAL TYPIST DETAILS: " << endl;
        c.showcasual();

        return 0;
}