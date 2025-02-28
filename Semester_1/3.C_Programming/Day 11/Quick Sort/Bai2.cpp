#include <stdio.h>
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}
void Sort(int *a,int n){
	int pivot=a[n-1]; // chon chot la so cuoi
   	int j=-1;
   	for(int i=0;i<n-1;i++){
   		if(a[i]<pivot){
   			j++;
   			swap(&a[i],&a[j]);
		   }
   } 
   swap(&a[j+1],&a[n-1]); // khong phai pivot vi pivot chi la bien tam, ko nam trong mang
}
int main() {
  int n;
   scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap vap phan tu thu %d: ",i);
		scanf("%d",&a[i]);
	}
   Sort(a,n);
   for(int i=0;i<n;i++){
   	printf("%d ",a[i]);
   }   
   //2,1,3,4,5,7,6,8
   
}

