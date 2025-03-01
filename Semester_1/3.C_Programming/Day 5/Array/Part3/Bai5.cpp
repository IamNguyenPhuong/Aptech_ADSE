#include <stdio.h>
#include <stdlib.h>
void TeamCall(int n){
	printf("The team will be\n");
   	for(int i=0;i<n;i++){
   		printf("Team %d\t",i);
   	}
   	printf("\nThe team will be\n");
   	for(int i=0;i<n;i++){
   		printf("Match %d\t",i);
   	}
   	printf("\nWarning, this is score of match so win=3, draw=1, lose=0, you can't enter a different number");
   	printf("\n----------------\n");
}
void Check(int *n){
	while(*n<0||*n>3||*n==2){
		scanf("%d",n);
	}
}

int main() {
   printf("How many team in this tournament: ");
   int n;
   scanf("%d",&n);
   TeamCall(n);
  int a[n][n];
  int *score=(int *)calloc(n,sizeof(int));
  for(int i=0;i<n;i++){
  	printf("----This is Team %d----\n",i);
  	for(int j=0;j<n;j++){
		printf("Enter point of match %d: ",j);
		if(i==j){
			printf("\nThis is a self-match so point=3\n");
			a[i][j]=3;
			score[i]+=a[i][j];
			continue;
		}
		scanf("%d",&a[i][j]);
		Check(&a[i][j]);
		score[i]+=a[i][j];	  	  
	  }printf("\n");
  }
  

  
  
  for(int i=0;i<n;i++){
  	printf("\tMatch %d",i);
  }printf("\n");
  for(int i=0;i<n;i++){
  	printf("Team %d\t",i);
  	for(int j=0;j<n;j++){
  		printf("%d\t",a[i][j]);
	  }printf("\tScore :%d\n",score[i]);
  }
  	int max=score[0];
  	int winner;
	for(int i=0;i<n;i++){
		if(max<score[i]) {
			max=score[i];
			winner =i;	
		}
	}
  printf("Max Score is %d\n",max);
  printf("The team %d is the winner",winner);
  free(score); 
  return 0;
}
 
 
 
/*

           Tran 1   Tran 2   Tran 3   Tran 4
Ðoi 1       3        1        3        0
Ðoi 2       0        3        1        3
Ðoi 3       3        0        3        1
Ðoi 4       1        3        0        3


*/
