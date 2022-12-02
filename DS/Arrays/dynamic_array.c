#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(5 * sizeof(int));
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
    printf("Elements in the array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}