#include <stdio.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void Sort(int *a,int n){
	while(a[n-1]>a[n]){
		swap(&a[n-1],&a[n]);
		n--;
	}
}
int main() {
   int n;
    printf("Nhap vao n: ");
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap vao gia tri thu %d: ", i);
        scanf("%d", a + i);
    }
   for(int i=1;i<n;i++){
   		int j=i;
   		Sort(a,j);
   }
   
    printf("Mang da sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

