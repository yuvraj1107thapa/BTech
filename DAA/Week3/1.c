#include <stdio.h>
#include <stdbool.h>

void insertionSort(int arr[], int size, int *shifts, int *comparisions) {
    for (int i = 1; i < size; i++) {
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > temp) {
            arr[j+1] = arr[j];
            (*shifts)++;
            (*comparisions)++;
            j--;
        }
        arr[j + 1] = temp;
        (*shifts)++;
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while(t > 0) {
        int size;
        scanf("%d", &size);
        int arr[size];
        for (int i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
        }
        int shifts = 0, comparisions = 0;
        insertionSort(arr, size, &shifts, &comparisions);
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\nComparisions: %d\n", comparisions);
        printf("Shifts: %d", shifts);
        t--;
    }
    return 0;
} 