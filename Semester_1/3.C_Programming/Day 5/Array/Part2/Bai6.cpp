#include <stdio.h>
#include <string.h>

int main() {
   char a[100];
   fgets(a,sizeof(a),stdin);//gets(a)
   // xu ly \n va \0
   int k=strlen(a);
   char b[k];
   b[k-1]='\0';
   for(int i=0;i<k;i++){
   	b[k-2-i]=a[i];
   }
    printf("%s",&b[0]);
   
}

