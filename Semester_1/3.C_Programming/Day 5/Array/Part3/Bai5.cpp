#include <stdio.h>
int cal(int a,int b,int c){
	int tong=2*a+b;
	return tong;
}
int main() {
   int n;
   printf("Nhap n ");
   scanf("%d",&n);
   int a[n][n];
   int x,y,z;
   for(int i=0;i<n;i++){
   	for(int j=i+1;j<n;j++){
   		printf("Team %d\n",i+1);
   		printf("Nhap ti so tran thu %d, giua team %d va team %d \n",j,i+1,j+1);
   		printf("Thang\t");
   		scanf("%d",&x);
   		printf("Hoa\t");
   		scanf("%d",&y);
   		printf("Thua\t");
   		scanf("%d",&z);
   		a[i][j]=cal(x,y,z);
   		a[j][i]=a[i][j];
   		printf("Team %d tran %d co %d diem\n",i+1,j+1,a[i][j]);
	   }printf("\n");
	   a[i][i]=0;
   }
   
   for(int i=0;i<n;i++){
   	for(int j=0;j<n;j++){
   		printf("%d ",a[i][j]);
	   }printf("\n");
   }
   
}

