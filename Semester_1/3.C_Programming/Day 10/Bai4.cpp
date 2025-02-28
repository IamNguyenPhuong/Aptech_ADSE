#include <stdio.h>

int main() {
   FILE *f1,*f2;
   f1=fopen("source.txt","r");
   f2=fopen("destination.txt","w");
   char a[50];
   fgets(a,sizeof(a),f1);
   fprintf(f2,a);
   fclose(f1);
    fclose(f2);
   
}

