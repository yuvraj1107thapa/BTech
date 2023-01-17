#include <iostream>

class Base {
public:
    virtual ~Base() {
        std::cout << "Base destructor called" << std::endl;
    }
};

class Derived : public Base {
private:
    int *m_array;

public:
    Derived(int size) : m_array(new int[size]) {
        std::cout << "Derived constructor called" << std::endl;
    }

    ~Derived() {
        std::cout << "Derived destructor called" << std::endl;
        delete[] m_array;
    }
};

int main() {
    Base *ptr = new Derived(5);
    delete ptr;
    return 0;
}
