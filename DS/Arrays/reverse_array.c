#include <stdio.h>

void reverse(int arr[], int size) {
    int i = 0, j = size - 1;
    while(i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}