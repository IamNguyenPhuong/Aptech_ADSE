#include <stdio.h>
#include <stdlib.h>

int main() {
   FILE *file;
   file=fopen("input.txt","r");
   char a[50];
 	fgets(a,sizeof(a),file);
     fprintf(stdout, "%s\n", a);
    
	fclose(file);
    return 0;
    
}

