#include <stdio.h>
#include <string.h>

void merge(char arr[], int l, int mid, int r) {
    int n1 = mid - l + 1;
    int n2 = r - mid;
    char a[n1];
    char b[n2];
    for (int i = 0; i < n1; i++) {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++) {
        b[i] = arr[mid + 1 + i];
    }
    int i = 0, j = 0, k = l;
    while(i < n1 && j < n2) {
        if(a[i] < b[j]) {
            arr[k++] = a[i++];
        } else {
            arr[k++] = b[j++];
        }
    }
    while(i < n1) {
        arr[k++] = a[i++];
    }
    while(j < n2) {
        arr[k++] = b[j++];
    }
}

void mergeSort(char arr[], int l, int r) {
    if(l < r) {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main() {
    char arr[30];
    printf("Enter a string: ");
    scanf("%s", &arr);
    int n = strlen(arr);
    printf("%d\n", n);
    for (int i = 0; i < n; i++) {
        // printf("%c\n", arr[i]);
        printf("%c = %d\n", arr[i], i);
    }
    mergeSort(arr, 0, n-1);
    for (int i = 0; i < n; i++) {
        printf("%c = %d\n", arr[i], i);
    }
    return 0;
}