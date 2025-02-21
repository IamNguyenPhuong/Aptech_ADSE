#include <stdio.h>
#include<string.h>

void reverse(char *a){
	int k=strlen(a)-1;
	for(int i=0;i<k;i++){
		printf("%c",a[k-1-i]);
	}
}
int main() {
	char a[100];
	fgets(a,sizeof(a),stdin);
	reverse(a);
}

