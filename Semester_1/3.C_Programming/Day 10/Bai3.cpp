#include <stdio.h>
#include<string.h>

int main() {
	FILE *f=fopen("text.txt","r");
	char a[50];
	fgets(a,sizeof(a),f);
	printf("%s",a);
	int count=0;
	int k=strlen(a);
	if(a[k-1]!=' ') count++;
	for(int i=0,j=0;i<k;i++){
		if(a[i]==' '){
			if(i!=j){
				if(i!=j+1){
					count++;
				}
				j=i;
			}
		
		}
	}
	printf("\n%d",count);
	fclose(f);
}

