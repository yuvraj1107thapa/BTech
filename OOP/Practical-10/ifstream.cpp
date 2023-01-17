#include <iostream>
#include <fstream>

int main() {
    std::ifstream inFile("students.txt");

    if (!inFile) {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }

    int id;
    std::string name;

    std::cout << "Student details:" << std::endl;

    while (inFile >> id >> name) {
        std::cout << "Student id: " << id << " Student name: " << name << std::endl;
    }

    inFile.close();
    return 0;
}
