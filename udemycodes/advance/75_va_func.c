//Variadic function
#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
int addingNumber(int total,...)
{
	int sum=0,i;
	va_list ptr1;    //Declare va_list type argument pointer
	va_start(ptr1,total);  //Start recuire va_list pointer and last argument 
	for(i=0;i<total;i++)
	{
		sum = sum+va_arg(ptr1,int);     //va_arg will fetch current argument and increase pointer
	}
	va_end(ptr1);    //end
	return sum;
	
}
int main()
{
	printf("Sum using variadic function\n");
	printf("10+20=%d\n",addingNumber(2,10,20));
	printf("10+20+30=%d\n",addingNumber(3,10,20,30));
	printf("10+20+30+40=%d\n",addingNumber(4,10,20,30,40));
	return 0;
}