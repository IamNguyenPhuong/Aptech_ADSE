#include <stdio.h>
#include<string.h>

int main() {
   
   char a[100];
   fgets(a,sizeof(a),stdin);
   int dem=1;
   for(int i=0;i<sizeof(a);i++){
   	if(a[i]==' '&&a[i+1]!=' ') dem++;
   }
   printf("ham tren co %d tu",dem);
}

