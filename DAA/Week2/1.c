#include <stdio.h>
#include <stdbool.h>

int firstOcc(int start, int end, int arr[], int key) {
    int result = -1;
    while(start <= end) {
        int mid = (start + end) / 2;
        if(arr[mid] == key) {
            result = mid;
            end = mid - 1;
        } else if(arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return result;
}

int lastOcc(int start, int end, int arr[], int key) {
    int result = -1;
    while(start <= end) {
        int mid = (start + end) / 2;
        if(arr[mid] == key) {
            result = mid;
            start = mid + 1;
        } else if(arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return result;
}

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
        int first = firstOcc(0, size - 1, arr, key);
        int last = lastOcc(0, size - 1, arr, key);
        if(first == -1 && last == -1) {
            printf("Key not present!\n");
        } else {
            int occurence = last - first + 1;
            printf("%d : %d\n", key, occurence);
        }
        
        t--;
    }
    return 0;
} 