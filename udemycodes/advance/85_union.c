//Observe difference in output by assigning all value at same time and by assigning values one by one.
#include<stdio.h>
//define union 
union student
{
	char grade;        //Grade in letter
	int roundedgrade;  //Rounded grade
	float exactgrade;  //Exact grade
	
};
int main()
{
	
	//decleare variables of type union student
	union student student1;
	union student student2;
	
	//assign values to all the union members and observe output
	student1.grade='B';
	student1.roundedgrade=87;
	student1.exactgrade=86.60;
	
	printf("Student1 Record\n");
	printf("Grade=%c\n",student1.grade);
	printf("Rounded Grade=%d\n",student1.roundedgrade);
	printf("Exact Grade=%f\n\n",student1.exactgrade);
	
	
	//assign values one by one and observe output
	printf("Student2 Record\n");
	student2.grade='A';
	printf("Grade=%c\n",student2.grade);
	student2.roundedgrade=92;
	printf("Rounded Grade=%d\n",student2.roundedgrade);
	student2.exactgrade=91.87;
	printf("Exact Grade=%f\n",student2.exactgrade);
	
}