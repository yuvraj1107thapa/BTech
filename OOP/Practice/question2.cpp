#include <iostream>
using namespace std;

class Marks {
    protected:
    public:
    int roll_number;
        string name;
        int physics, chemistry, mathematics;
        Marks(int rn, string nm) {
            roll_number = rn;
            name = nm;
            physics = chemistry = mathematics = 0;
        }
};

class Physics: public Marks {
    public:
        Physics(int rn, string nm, int marks): Marks(rn, nm) {
            physics = marks;
        }
};

class Chemistry: public Marks {
    public:
        Chemistry(int rn, string nm, int marks): Marks(rn, nm) {
            chemistry = marks;
        }
};

class Mathematics: public Marks {
    public:
        Mathematics(int rn, string nm, int marks): Marks(rn, nm) {
            mathematics = marks;
        }
};



int main() {
    int num_students;
    cout << "Enter the number of students in the class: ";
    cin >> num_students;

    Marks* students[num_students];
    for (int i = 0; i < num_students; i++) {
        int roll_number;
        string name;
        int physics_marks, chemistry_marks, mathematics_marks;

        cout << "Enter roll number of student: ";
        cin >> roll_number;
        cout << "Enter name of student: ";
        cin >> name;
        cout << "Enter marks in physics: ";
        cin >> physics_marks;
        cout << "Enter marks in chemistry: ";
        cin >> chemistry_marks;
        cout << "Enter marks in mathematics: ";
        cin >> mathematics_marks;

        students[i] = new Marks(roll_number, name);
        students[i] = new Physics(roll_number, name, physics_marks);
        students[i] = new Chemistry(roll_number, name, chemistry_marks);
        students[i] = new Mathematics(roll_number, name, mathematics_marks);
    }

    // Print total marks and average marks for each student
    for (int i = 0; i < num_students; i++) {
        int total_marks = students[i]->physics + students[i]->chemistry + students[i]->mathematics;
        double average_marks = total_marks / 3.0;
        cout << "Total marks for " << students[i]->name << " (Roll number: " << students[i]->roll_number << ") = " << total_marks << endl;
        cout << "Average marks for " << students[i]->name << " (Roll number: " << students[i]->roll_number << ") = " << average_marks << endl;
    }

    return 0;
}
