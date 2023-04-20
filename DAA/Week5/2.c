#include <stdio.h>

void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

void findElementsWithSum(int arr[], int n, int key) {
    mergeSort(arr, 0, n - 1); // Sort the array using merge sort
    int i = 0, j = n - 1;
    while (i < j) {
        int sum = arr[i] + arr[j];
        if (sum == key) {
            printf("%d %d\n", arr[i], arr[j]);
            // cout << arr[i] << " " << arr[j] << endl;
            return;
        }
        else if (sum < key)
            i++;
        else
            j--;
    }
    printf("No such elements exist\n");
    // cout << "No Such Elements Exist" << endl;
}

int main() {
    int t;
    // cin >> t;
    scanf("%d", &t);
    while (t--) {
        int n, key;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        scanf("%d", &key);
        findElementsWithSum(arr, n, key);
    }
    return 0;
}
