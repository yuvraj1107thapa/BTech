#include <iostream>

class MyClass {
private:
    int m_data;

public:
    MyClass(int data) : m_data(data) { }

    void setData(int data) { m_data = data; }
    int getData() const { return m_data; }

    friend void swap(MyClass *obj1, MyClass *obj2);
};

void swap(MyClass* obj1, MyClass* obj2) {
    int temp = obj1->m_data;
    obj1->m_data = obj2->m_data;
    obj2->m_data = temp;
}

int main() {
    MyClass obj1(5);
    MyClass obj2(10);

    std::cout << "Before swapping: " << std::endl;
    std::cout << "obj1 data: " << obj1.getData() << std::endl;
    std::cout << "obj2 data: " << obj2.getData() << std::endl;

    swap(&obj1, &obj2);

    std::cout << "After swapping: " << std::endl;
    std::cout << "obj1 data: " << obj1.getData() << std::endl;
    std::cout << "obj2 data: " << obj2.getData() << std::endl;

    return 0;
}
