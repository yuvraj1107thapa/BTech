#include <stdio.h>

int partition(int start, int end, int arr[]) {
    int pivot = arr[end];
    int i = start - 1;
    for (int j = start; j < end; j++) {
        if(arr[j] < pivot) {
            i++;
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = pivot;
    arr[end] = temp;
    return i + 1;
}

void quickSelect(int arr[], int start, int end, int key) {
    if(start <= end) {
        int part = partition(start, end, arr);
        if(part == key-1) {
            printf("%d", arr[part]);
        }
        if(part > key -1) {
            quickSelect(arr, start, part-1, key);
        } else {
            quickSelect(arr, part + 1, end, key);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int key;
    scanf("%d", &key);
    quickSelect(arr, 0, n-1, key);
    return 0;
}