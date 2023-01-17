#include <iostream>

template <typename T>
void printArray(T* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

template <typename T>
T sumArray(T* arr, int size) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    printArray(intArray, 5);
    std::cout << "Sum of array: " << sumArray(intArray, 5) << std::endl;

    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    printArray(doubleArray, 5);
    std::cout << "Sum of array: " << sumArray(doubleArray, 5) << std::endl;

    return 0;
}
