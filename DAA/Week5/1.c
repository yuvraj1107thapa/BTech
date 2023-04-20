#include <stdio.h>
#include <stdbool.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int size;
        scanf("%d", &size);
        char arr[size];
        for (int i = 0; i < size; i++) {
            scanf(" %c", &arr[i]);
        }
        int freqCount[26] = {0};
        for (int i = 0; i < size; i++) {
            freqCount[arr[i]-'a']++;
        }
        bool flag = false;
        for (int i = 0; i < 26; i++) {
            if(freqCount[i] > 1) {
                flag = true;
                printf("%c : %d\n", (char)('a' + i), freqCount[i]);
            }
        }
        if(flag == false) {
            printf("No duplicates present\n");
        }
    }
    return 0;
}