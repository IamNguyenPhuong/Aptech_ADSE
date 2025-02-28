#include <stdio.h>

int main() {
	char a[50];
	fgets(a,sizeof(a),stdin);
	FILE *f;
	f=fopen("output.txt","w");
	fprintf(f,a); //;printf("%s",a)
	fclose(f);
}

