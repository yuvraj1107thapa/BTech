#include <stdio.h>
#include <stdbool.h>

bool flag;

int partition(int start, int end, int arr[], int *swaps, int *comparisions) {
    int pivot = arr[end];
    int i = start - 1;
    for (int j = start; j < end; j++) {
        (*comparisions)++;
        if(arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            (*swaps)++;
        }
    }
    int temp = arr[i+1];
    arr[i+1] = pivot;
    arr[end] = temp;
    (*swaps)++;
    return i + 1;
}

void quickSort(int start, int end, int arr[], int *swaps, int *comparisions) {
    if(start < end) {
        int pi = partition(start, end, arr, swaps, comparisions);
        quickSort(start, pi-1, arr, swaps, comparisions);
        quickSort(pi+1, end, arr, swaps, comparisions);
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while(t > 0) {
        flag = false;
        int size;
        scanf("%d", &size);
        int arr[size];
        for (int i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
        }
        int comparisions = 0, swaps = 0;
        quickSort(0, size-1, arr, &swaps, &comparisions);
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\nSwaps: %d", swaps);
        printf("\nComparisions: %d\n", comparisions);
        t--;
    }
    return 0;
} 