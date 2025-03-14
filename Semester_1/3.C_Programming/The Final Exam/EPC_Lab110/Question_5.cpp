#include <stdio.h>
struct Employee{
	char employeeID[100];
	char fullname[50];
	float salary;
	int yearOfBirth;
};

int main() {
	int n;
	printf("Enter the number of employees: ");
	scanf("%d",&n);
	struct Employee EE[n];
	for(int i=0;i<n;i++){
		fflush(stdin);
		printf("Enter Employee ID: ");
		gets(EE[i].employeeID);
		printf("Enter Full Name: ");
		gets(EE[i].fullname);
		printf("Enter Salary: ");
		scanf("%f",&EE[i].salary);
		printf("Enter Year of Birth: ");
		scanf("%d",&EE[i].yearOfBirth);
	}
	float max=EE[0].salary;
	int pivot=0;
	for(int i=0;i<n;i++){
		if(max<EE[i].salary) {
			max=EE[i].salary;
			pivot=i;
		}
	}
	printf("Employee with highest salary\n");
	printf("ID: %s\n",EE[pivot].employeeID);
	printf("Name: %s\n",EE[pivot].fullname);
	printf("Salary: %f\n",EE[pivot].salary);
	printf("Year of Birth: %d\n ",EE[pivot].yearOfBirth);
	FILE *f=fopen("Employees.txt","w");
	fprintf(f,"ID: %s\n",EE[pivot].employeeID);
	fprintf(f,"Name: %s\n",EE[pivot].fullname);
	fprintf(f,"Salary: %f\n",EE[pivot].salary);
	fprintf(f,"Year of Birth: %d\n ",EE[pivot].yearOfBirth);
	
}

