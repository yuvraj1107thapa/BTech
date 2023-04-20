#include <stdio.h>
#include <stdbool.h>

bool flag;

void merge(int start, int mid, int end, int arr[], int *inversions, int *comparisions) {
    int n1 = mid - start + 1;
    int n2 = end - mid;
    int arr1[n1];
    int arr2[n2];
    for (int i = 0; i < n1; i++) {
        arr1[i] = arr[start + i];
    }
    for (int i = 0; i < n2; i++) {
        arr2[i] = arr[mid + i + 1];
    }
    int i = 0, j = 0, k = start;
    while(i < n1 && j < n2) {
        (*comparisions)++;
        if(arr1[i] == arr2[j]) {
            flag = true;
        }
        if(arr1[i] <= arr2[j]) {
            arr[k++] = arr1[i++];
        } else {
            (*inversions) += n1 - i;
            arr[k++] = arr2[j++];
        }
    }
    while(i < n1) {
        arr[k++] = arr1[i++];
    }
    while(j < n2) {
        arr[k++] = arr2[j++];
    }
}

void mergeSort(int start, int end, int arr[], int *inversions, int *comparisons) {
    if(start < end) {
        int mid = (start + end) / 2;
        mergeSort(start, mid, arr, inversions, comparisons);
        mergeSort(mid+1, end, arr, inversions, comparisons);
        merge(start, mid, end, arr, inversions, comparisons);
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
        int comparisions = 0, inversions = 0;
        mergeSort(0, size-1, arr, &inversions, &comparisions);
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\nInversions: %d", inversions);
        printf("\nComparisions: %d\n", comparisions);
        t--;
    }
    return 0;
} 