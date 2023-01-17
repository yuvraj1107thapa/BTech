#include <iostream>
#include <fstream>

int main() {
    std::ofstream outFile("students.txt", std::ios::app);

    if (!outFile) {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }

    int id;
    std::string name;

    std::cout << "Enter student id: ";
    std::cin >> id;
    std::cout << "Enter student name: ";
    std::cin.ignore();
    std::getline(std::cin, name);

    outFile << id << " " << name << std::endl;

    outFile.close();

    std::ifstream inFile("students.txt");
    if (!inFile) {
        std::cerr << "Error opening file" << std::endl;
        return 1;
    }

    std::cout << "Student details:" << std::endl;

    while (inFile >> id >> name) {
        std::cout << "Student id: " << id << " Student name: " << name << std::endl;
    }

    inFile.close();
    return 0;
}
