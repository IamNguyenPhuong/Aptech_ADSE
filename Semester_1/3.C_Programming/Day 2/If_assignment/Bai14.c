#include <stdio.h>

int main() {
   
   char c;
   c=getchar();
   if(65<=c&&c<=90) printf("Viet hoa");
   else if(97<=c&&c<=122) printf("viet thuong");
   else printf("khong phai chu so");
 
}

