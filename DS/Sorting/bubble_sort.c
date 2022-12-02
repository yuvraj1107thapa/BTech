#include <stdio.h>

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void bubbleSort(int arr[], int n) {
    int counter=1;
	while (counter<n){
		for (int i=0; i<n-counter; i++){
			if (arr[i]>arr[i+1]){
				int temp=arr[i+1];
				arr[i+1]=arr[i];
				arr[i]=temp;
			}
		}
        counter++;
    }	
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}