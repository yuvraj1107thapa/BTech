#include <stdio.h>
#include <stdbool.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t > 0) {
        int size;
        scanf("%d", &size);
        int arr[size];
        for (int i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
        }
        int key;
        scanf("%d", &key);
        int count = 0;
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if(arr[i] - arr[j] == key) {
                    count++;
                    continue;
                } 
                if(arr[j] - arr[i] == key) {
                    count++;
                }
            }
        }
        printf("%d\n", count);
        t--;
    }
    return 0;
} 