#include <stdio.h>

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void insertionSort(int arr[], int n) {
    for (int i=1; i<n; i++){
		int current=arr[i];
		int j=i-1;
		while (arr[j]>current && j>=0){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=current;
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
    insertionSort(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}