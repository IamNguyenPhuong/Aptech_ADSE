#include <stdio.h>
#include <string.h>

int main() {
   
   char a[100];
   fgets(a, sizeof(a),stdin);
   printf("%s",&a[0]);
   printf("nhap vao b\n");
     char b[100];
   fgets(b, sizeof(b),stdin);
   printf("%s",&b[0]);
  int k= strcmp(a,b);
  if(k==0) printf("bang nhau");
  else printf("khong bang nhau");
   
}

