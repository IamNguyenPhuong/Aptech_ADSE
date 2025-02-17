#include <stdio.h>

int main() {
   char a[10];
  fgets(a,sizeof(a),stdin);//gets(a)
   printf("%s",&a[0]);
   
}

