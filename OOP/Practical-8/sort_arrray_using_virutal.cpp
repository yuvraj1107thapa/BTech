#include <iostream>
#include <algorithm>
using namespace std;

class Sorter {
public:
    virtual bool operator()(int a, int b) {
        return a > b;
    }
};

int main() {
    int arr[] = {3, 2, 4, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + size, Sorter()); // sort in descending order using virtual function

    cout << "Sorted in descending order: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    sort(arr, arr + size); // sort in ascending order using default function

    cout << "\nSorted in ascending order: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
