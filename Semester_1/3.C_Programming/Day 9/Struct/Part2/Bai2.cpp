#include <stdio.h>
struct  Employee{
	 char name[30];
	 char address[40];
	 int salary;
	  
};
void swap(struct  Employee *a,struct  Employee *b){
	struct  Employee temp=*a;
	*a=*b;
	*b=temp;
}
int main() {
	struct  Employee employeeList[3];
	for(int i=0;i<3;i++){
		printf("Enter name for number %d: ",i);
		gets(employeeList[i].name);
		printf("Enter name for address %d: ",i);
		gets(employeeList[i].address);
		printf("Enter salary: ");
		scanf("%d",&employeeList[i].salary);
		getchar();		
	}
	
	for(int i=0;i<3;i++){
		printf("%s\t%s\t%d",employeeList[i].name,employeeList[i].address,employeeList[i].salary);
		printf("\n");
	}
	printf("\n------------\n");
	for(int i=0;i<3;i++){
		for(int j=i+1;j<3;j++){
			if(employeeList[i].salary>employeeList[j].salary){
				swap(&employeeList[i],&employeeList[j]);
			}
		}
	}
		for(int i=0;i<3;i++){
		printf("%s\t%s\t%d",employeeList[i].name,employeeList[i].address,employeeList[i].salary);
		printf("\n");
	}
	printf("\n------------\n");
	printf("%s\t%s\t%d",employeeList[0].name,employeeList[0].address,employeeList[0].salary);
	FILE *f;
	f=fopen("Salary.txt","w");
//	fprintf(f,employeeList);
	for(int i=0;i<3;i++){
		fprintf(f,employeeList[i].name);
		fprintf(f,"\t");
		fprintf(f,employeeList[i].address);
		fprintf(f,"\t");
//		fprintf(f,fprintf(f,(char *)employeeList[i].salary));
		fprintf(f, "%d", employeeList[i].salary);
		fprintf(f,"\n");
	}
	fclose(f);
	return 0;
}
