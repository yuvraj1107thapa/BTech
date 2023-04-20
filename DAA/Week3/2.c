#include <stdio.h>
#include <stdbool.h>

void selectionSort(int arr[], int size, int *swaps, int *comparisions) {
    for (int i = 0; i < size; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
            (*comparisions)++;
        }
        if(min == i) {
            continue;
        } else {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
            (*swaps)++;
        }
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
        int swaps = 0, comparisions = 0;
        selectionSort(arr, size, &swaps, &comparisions);
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\nComparisions: %d\n", comparisions);
        printf("Swaps: %d", swaps);
        t--;
    }
    return 0;
} 