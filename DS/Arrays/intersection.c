#include <stdio.h>

int main() {
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,3,5,7,10,11};
    int arr1Size = sizeof(arr1) / sizeof(arr1[0]);
    int arr2Size = sizeof(arr2) / sizeof(arr2[0]);
    int Intersection[sizeof(arr1) + sizeof(arr2)];
    int i = 0, j = 0, k = 0;
    while(i < arr1Size && j < arr2Size) {
        if(arr1[i] == arr2[j]) {
            Intersection[k++] = arr1[i];
            i++; j++;
        } else if(arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }
    for (int i = 0; i < k; i++) {
        printf("%d ", Intersection[i]);
    }
    
    return 0;
}