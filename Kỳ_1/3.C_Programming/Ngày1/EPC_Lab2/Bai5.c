#include <stdio.h>

int main() {
   int a,b,c,d,e;
   printf("Enter 5 intergers : ");
   scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
   int sum=a+b+c+d+e;
   printf("The sum: %d\n",sum);
  
   printf("Percentage: %d(%.2f%%); %d(%.2f%%); %d(%.2f%%); %d(%.2f%%); %d(%.2f%%)",a,(float)a*100/sum,b,(float)b*100/sum,c,(float)c*100/sum,d,(float)d*100/sum,e,(float)e*100/sum);
   
   
}

