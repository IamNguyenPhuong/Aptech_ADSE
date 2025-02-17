#include <stdio.h>
#include<string.h>

int main() {
   
   char a[100];
   fgets(a,sizeof(a),stdin);
   int dem=1;
   if(a[0]=' ') dem=0;
   for(int i=0;i<strlen(a)-1;i++){
   	if(a[i]==' '){
   		if(a[i+1]!=' '&&a[i+1]!='\n') dem++;
	   }
   }
   printf("chuoi tren co %d tu",dem);
}

