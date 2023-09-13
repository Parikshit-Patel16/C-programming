#include <stdio.h>
#include <string.h>
#include <malloc.h>

int add(int a, int b) {return a + b;}
int sub(int a, int b) {return a - b;}
int mult(int a, int b){return a * b;}
int div(int a, int b) {return a / b;}

int value1,value2;

/// Array of pointers to functions
int (*fpArr[])(int,int) = { &add,&sub,&mult,&div };

// performs the given operation on all elements of the arrays A and B 
int* performOp(int a, int b, int (*f)(int,int))
{
    int c;
	c = (*f)(a,b);
    return c;
}

// main 
int main()
{
  int choice = 0;
  int result = 0;
  int j;
  
  while(choice != 5)
  {
	printf("\n\nWhich operation do you want to perform? \n");
	printf("1.Add \n");
	printf("2.Subtract \n");
	printf("3.Multiply \n");
	printf("4.Divide \n");
	printf("5.None ... \n");
	printf("Enter choice: ");
	scanf("%d", &choice);

	if(choice == 5) break;
	if(choice < 1 || choice > 5) continue;

	j = choice - 1;
	
	printf("Enter Value with single space:-");
	scanf("%d %d",&value1,&value2);

	result = performOp(value1,value2,fpArr[j]);		

	printf("\n\nThe Result is=%d...\n",result);

  }  
  return 0;
}

