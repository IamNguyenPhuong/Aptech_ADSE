#include <stdio.h>
int findSmallest(int arr[],int size){
	int min=arr[0];
	for(int i=0;i<size;i++){
		if(min>arr[i]) min=arr[i];
	}
	return min;
}
int findSecondLargest(int arr[],int size){
	int min=findSmallest(arr,size);
	int max=arr[0];
	for(int i=0;i<size;i++){
		if(max<arr[i]) max=arr[i];
	}
	int max2=min;
	for(int i=0;i<size;i++){
		if(max2<arr[i]&&arr[i]<max) max2=arr[i];
	}
	return max2;
	
}
int main() {
	int n;
	printf("Enter the number of element: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Enter the array elements: ");
		scanf("%d",&a[i]);
	}
	int min=findSmallest(a,n);
	printf("Smallest number: %d\n",min);
	int max2=findSecondLargest(a,n);
	printf("Second Largest number: %d\n",max2);
	
}

