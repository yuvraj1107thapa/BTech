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
        int comparision = 0;
        for (int i = 0; i < size; i++) {
            if(arr[i] == key) {
                comparision = i;
                break;
            }
        }
        if(comparision != -1) {
            printf("Present, %d", comparision);
        } else {
            printf("Not Present, %d\n", size);
        }
        t--;
    }
    return 0;
} 