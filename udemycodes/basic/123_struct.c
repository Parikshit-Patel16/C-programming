//Declare structure and assign values to it using different methods
#include<stdio.h>
int main()
{
	struct employee
	{
		char name[10];
		char date[12];
		float salary;
	};
	
	struct employee emp1={"Parikshit","01/01/2023",10000};
	struct employee emp2;
	printf("Enter name:-");
	scanf("%s",emp2.name);
	printf("Enter Date:-");
	scanf("%s",emp2.date);
	printf("Enter salary:-");
	scanf("%f",&emp2.salary);
	
	
	printf("emp1 name is=%s\n",emp1.name);
	printf("emp2 name is=%s\n",emp2.name);
	printf("emp1 Date is=%s\n",emp1.date);
	printf("emp2 Date is=%s\n",emp2.date);
	printf("emp1 Salary is=%.2f\n",emp1.salary);
	printf("emp2 Salary is=%.2f\n",emp2.salary);
	return 0;
}