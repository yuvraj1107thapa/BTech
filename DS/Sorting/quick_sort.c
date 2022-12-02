#include <stdio.h>

void swap(int arr[], int i, int j){
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
int partition(int arr[], int l, int r){
	int pivot=arr[r];
	int i=l-1;
	int j=l;
	for (int j=l; j<r; j++){
		if (arr[j] < pivot){
			i++;
			swap(arr,i,j);
		}
	}
	swap(arr,i+1,r);
	return i+1;
}
void quickSort(int arr[], int l, int r){
	if (l<r){
		int pi=partition(arr,l,r);
		quickSort(arr,l,pi-1);
		quickSort(arr,pi+1,r);
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
    quickSort(arr, 0, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}