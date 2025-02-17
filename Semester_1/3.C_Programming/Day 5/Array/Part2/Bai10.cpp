#include <stdio.h>
#include <string.h>

int main() {
   printf("nhap vao a: ");
   char a[100];
   fgets(a, sizeof(a),stdin);
  
   printf("nhap vao b: ");
     char b[100];
   fgets(b, sizeof(b),stdin);
  
   a[strlen(a)-1]='\0';
 	strcat(a,b);
 	printf("%s",&a[0]);
   
}

