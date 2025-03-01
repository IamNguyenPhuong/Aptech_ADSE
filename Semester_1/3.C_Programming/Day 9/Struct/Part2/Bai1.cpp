#include <stdio.h>
struct  Employee{
	 char name[30];
	 char address[40];
	 int salary;
	  
};
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
}

