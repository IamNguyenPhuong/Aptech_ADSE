#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_INT 100
int main() {
   int number;
   srand(time(0));
    number = rand() % MAX_INT + 1;
     printf("Chao mung den voi trò choi Hi-Lo!\n");
    printf("Toi da nghi ra mot so tu 1 den %d. Hay doan thu xem!\n", MAX_INT);
   int n;
   int count=1;
   do{
   	scanf("%d",&n);
   	if(n<number) printf("So lon hon phai tim\n");
   	else if (n>number) printf("So nho hon phai tim\n");
   	else{
	    printf("Chuc mung ban da thang voi %d lan doan",count);
	    return 0;
		}
	count++;
   }while(n!=number);
}

