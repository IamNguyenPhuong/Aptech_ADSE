#include <stdio.h>
#include<string.h>

int main() {
   char a[100];
   fgets(a,sizeof(a),stdin);
   int count=0;
   int count2=0;
   for(int i=0;i<strlen(a);i++){
   		if('a'<=a[i]&&a[i]<='z'){
   			if(a[i]=='a'||a[i]=='e'||a[i]=='u'||a[i]=='o'||a[i]=='i') count++;
   			else count2++;
		   }
   }
   printf("so luong nguyen am la %d\n",count);
   printf("so luong phu am la %d",count2);
}



