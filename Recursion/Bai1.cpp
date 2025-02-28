#include <stdio.h>
// Khoi dau ve de quy(recursion)
// Basic problem 5!=?
int main() {
	int tich=1;
/*    for(int i=1;i<=5;i++){
   		tich*=i;
   }
*/
   for(int i=5;i>=1;i--){
   	tich*=i;
   }
    printf("%d",tich);
   
}


