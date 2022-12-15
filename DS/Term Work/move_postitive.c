#include <stdio.h>

void movePositive(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if(arr[i]) {
            for (int j = i; j < n; j++) {
                if(arr[j] < 0) {
                    int temp = arr[j];
                    while(j > i) {
                        arr[j] = arr[j - 1];
                        j--;
                    }
                    arr[i] = temp;
                    break;
                }
            }

        }
    }
}

int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter element of array: ");
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    movePositive(arr, n);
    printf("Moved all postive elements to end.\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}