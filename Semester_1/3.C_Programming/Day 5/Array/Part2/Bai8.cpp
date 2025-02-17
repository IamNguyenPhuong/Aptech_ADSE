#include <stdio.h>
#include<string.h>
int main() {
   
   char a[100];
   fgets(a,sizeof(a),stdin);
   int k=strlen(a)-1;
   for(int i=0;i<k;i++){
   		if(a[i]!=a[k-1-i]){
   			printf("khong doi xung");
   			return 0;
		   }
   }
   printf("Doi xung");
   
}

