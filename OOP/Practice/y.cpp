#include <iostream>
using namespace std;

class Marks {
    public:
        int roll_number;
        int marks;
        string name;
        int physics, mathematics, chemistry;
};

class Physics: public Marks {
    public:
        Physics(int x) {
            marks = x;
        }
};

class Chemistry: public Marks {
    public:
        Chemistry(int x) {
            marks = x;
        }
};

class Mathematics: public Marks {
    public:
        Mathematics(int x) {
            marks = x;
        }
};

int main() {
        int stude;
        cout << "Enter number of students: ";
        cin >> stude;
        Marks *students[stude];
        for (int i = 0; i < stude; i++) {
            int phy, chem, maths;
            cout << "Enter name of student " << i + 1 << " : ";
            cin >> students[i]->name;
            cout << "Enter roll no. : ";
            cin >> students[i]->roll_number;
            cout << "Enter marks in Physics: ";
            cin >> phy;
            cout << "Enter marks in Chemistry: ";
            cin >> chem;
            cout << "Enter marks in Mathematics: ";
            cin >> maths;
            students[i] = new Physics(phy);
            students[i] = new Chemistry(chem);
            students[i] = new Mathematics(maths);
        }
        cout << "Average marks of student: " << students[1]->name << " is " << students[1]->physics + students[1]->chemistry + students[1]->mathematics;
        return 0;
}