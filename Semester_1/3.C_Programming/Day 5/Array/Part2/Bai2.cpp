#include <stdio.h>
#include <string.h>

int main() {
   
  
   char a[100];
   printf("nhap chuoi\n");
   fgets(a,sizeof(a),stdin);
   printf("do dai cua chuoi la %d ",strlen(a));
   
   
}

