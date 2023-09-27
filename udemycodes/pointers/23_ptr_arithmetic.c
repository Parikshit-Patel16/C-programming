#include<stdio.h>
#define LENGTH 3
void main()
{
    char *data[LENGTH];  //declare array of string
	char *p; //single pointer
	char **dp; //double pointer
	int i;
	
	//Assign values to array
	data[0]="ZERO";   
	data[1]="ONE";
	data[2]="TWO";
	
	for(i=0;i<LENGTH;i++)
		printf("%s\n",data[i]);
	
	dp=data;   //Double pointer points to array's elements
	for(i=0;i<LENGTH;i++)
	{
		dp=data+i;//same as dp=data[i] 
		p=*dp;//p set to first char of string that dp points to
		while(*p!= 0)
		{
			printf("%c ",*p);//get character at current address and go to next address
			p+=1;
		}
	printf("\n");	
	}
}