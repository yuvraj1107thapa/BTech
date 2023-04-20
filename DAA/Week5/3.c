#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, key;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        int n2;
        scanf("%d", &n2);
        int arr2[n2];
        for (int i = 0; i < n2; i++) {
            scanf("%d", &arr2[i]);
        }
        int i = 0, j = 0;
        while(i < n && j < n2) {
            if(arr[i] == arr2[j]) {
                printf("%d ", arr[i]);
                i++;
                j++;
            }
            else if(arr[i] < arr2[j]) {
                i++;
            } else {
                j++;
            }
        }

    }
    return 0;
}
