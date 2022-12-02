#include <stdio.h>

int main() {

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 77, 11, 6};
    int maxElement = arr[0], size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 1; i < size; i++) {
        if(arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    printf("Max element from the array: %d", maxElement);
    return 0;
}