#include <stdio.h>
void Sayhello(){
	printf("Say Hello\n");
}
int main() {
   
	void (*ptr)(void);
   ptr=Sayhello;
   ptr();
   printf("%p",Sayhello);
   // truyen 1 h�m l�m tham so cho ham khac
}

