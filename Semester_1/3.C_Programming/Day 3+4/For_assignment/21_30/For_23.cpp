#include <stdio.h>

int main() {
   int a[4];
   for(int i=0;i<4;i++){
		do{
			printf("Nhap vao so thu %d ",i);
   			scanf("%d",&a[i]);
   			printf("\n");
		}while(a[i]<0||a[i]>10);
   }
   for(int i=0;i<4;i++){
   		printf("%d ",a[i]);
   }
   printf("\n");
   if(a[0]*a[3]*a[3]==a[1]*a[2]*a[2]*a[2]){
   		for(int i=0;i<4;i++){
   		printf("a[%d]=%d ",i,a[i]);
  	 }
   }
   
}

