//1-print value of Predefined macros
//2-Arithmatic operations using macros
#include<stdio.h>
#define SUM(x,y) (x+y)   //perform sum
#define sqr(x) x*x       //perform square
int main()
{
	//-----------------1------------------
	printf("__LINE__=%d\n",__LINE__);  //Current line number
	printf("__FILE__=%s\n",__FILE__);  //File Path
	printf("__STDC__=%d\n",__STDC__);  //Compiler Standerd
	printf("__TIME__=%s\n",__TIME__);  //Compilation Time
	printf("__DATE__=%s\n",__DATE__);  //Compilation Date
	
	//----------------2-------------------
	int num1=0,num2=0,num3=0;
	printf("Enter two numbers with single space:-");
	scanf("%d %d",&num1,&num2);
	printf("Sum of two number is %d\n",SUM(num1,num2));
	
	printf("\nEnter number to find its square:-");
	scanf("%d",&num3);
	printf("Square of number is %d\n",sqr(num3));
	
	return 0;
}