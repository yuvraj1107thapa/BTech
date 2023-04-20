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
        bool flag = false;
        int start = 0, end = size - 1;
        while(start <= end) {
            comparision++;
            int mid = (start + end) / 2;
            if(arr[mid] == key) {
                flag = true;
                break;
            } else if(arr[mid] < key) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        if(flag == true) {
            printf("Present, %d\n", comparision);
        } else {
            printf("Not Present, %d\n", comparision);
        }
        t--;
    }
    return 0;
} 