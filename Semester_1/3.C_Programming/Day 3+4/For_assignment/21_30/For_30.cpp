#include <stdio.h>

int main() {
   char c;
   do{
   	printf("Nhap vao ki tu tu ban phim ");
   	c=getchar();
   	fflush(stdin);  //file flush stdin , don sach file trong bo nho stdin
   	if(c<=31||c==127){
   		return 0;
	   }
	else if(97<=c&&c<=122){
		printf("%c\n",c-32);
	}
	else if(65<=c&&c<=90){
		printf("%c\n",c+32);
	}else printf("%c\n",c);
   }while(1);
   
}

