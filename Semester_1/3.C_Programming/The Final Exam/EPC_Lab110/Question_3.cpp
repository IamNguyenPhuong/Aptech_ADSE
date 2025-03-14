#include <stdio.h>
#include<stdlib.h>
void replaceAndCountNegatives(int *arr,int size,int replaceValue, int *countNeg, int *sumNeg){
	for(int i=0;i<size;i++){
		if(arr[i]<0){
			(*countNeg)++;
			(*sumNeg)+=arr[i];
			printf("The number arr[%d] is Negative and replaceValue: ");
			scanf("%d",&replaceValue);
			arr[i]=replaceValue;
		}
	}
	
}
int main() {
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int *a=(int *)calloc(n,sizeof(int));
	for(int i=0;i<n;i++){
		printf("Enter the arr[%d]: ",i);
		scanf("%d",&a[i]);
	}
	int countNeg=0;
	int sumNeg=0;
	int replaceValue=0;
	replaceAndCountNegatives(a,n,replaceValue,&countNeg,&sumNeg);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\ncountNeg = %d\n",countNeg);
	printf("sumNeg = %d",sumNeg);
}

