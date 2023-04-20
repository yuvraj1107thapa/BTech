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
        bool flag = false;
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                int sum = arr[i] + arr[j];
                for (int k = j + 1; k < size; k++) {
                    if(arr[k] == sum) {
                        flag = true;
                        printf("%d %d %d\n", i, j, k);
                        break;
                    }
                }
                if(flag == true)
                    break;
            } 
            if(flag == true)
                break;
        }
        if(flag == false) {
            printf("Sequence not found!");
        }
        t--;
    }
    return 0;
} 