//1-find sum of given range using recursion
//2-find GCD of given numbers 
//3-Reverse string using recursion

#include<stdio.h>
#include<string.h>

//function to perform sum of given range
int sum(int num1,int num2)
{
	int total=0;
	if(num1>num2)
	return 0; 

    if(num2==num1)
    return num1;

	total=num2+sum(num1,num2-1);
	return total;
}

//function to perform GCD of two numbers
int gcd(int num1,int num2)
{
	while(num1!=num2)
	{
		if(num1>num2)
		{
			return gcd(num1-num2,num2);
		}
		else
		{ 	
			return gcd(num1,num2-num1);
		}
	}
	return num1;
}


//function to reverse string
char * reverse(char *str)
{
    static int i=0;
    static char rev[50];
    if(*str)
    {
        reverse(str+1);
        rev[i++]=*str;
    }
    return rev;
}


int main()
{
    int min,max,taskno;
    char string[50];
    char *revstr;
	printf("Choose your task:\n");
	printf("1:-Sum of given range\n2:-GCD of 2 number\n3:-Reverse the String\n");
	scanf("%d",&taskno);
	switch(taskno)
	{
		case 1:printf("Enter Range with single space:-");
			scanf("%d %d",&min,&max);
			printf("Sum of given range is=%d",sum(min,max));
			break;
			
		case 2:printf("Enter two numbr with single space:-");
			scanf("%d %d",&min,&max);
			printf("GCD of given numbers is=%d",gcd(min,max));
			break;
			
		case 3:printf("Enter string:-");
		    scanf("%s",string);
		    revstr=reverse(string);
		    printf("Reversed string is=%s\n",revstr);
		    break;
		default:
			break;
	}
}
