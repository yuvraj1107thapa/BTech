#include <stdio.h>

int main() {
    int num, sum = 0, arr[100];
    printf("Size of my array: ");
    scanf("%d", &num);
    printf("Put the elements in the array:" );
    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    printf("Sum of all even interger: %d", sum);
    return 0;
}