//Check and Set Bit
#include<stdio.h>
void main()
{
	int Number,bitstatus,position,ret;
	printf("Enter Number in Decimal:-");
	scanf("%d",&Number);
	printf("Enter bit position that you wants to check and Set:-");  //0-31
	scanf("%d",&position);
	
	//Check bit:-   We can check bit status either by (And with 1) or (Or with 0)
	bitstatus=(Number>>position) & 1;
	printf("Bit at %d is %d",position,bitstatus);
	
	//Set bit:-   We can set bit by (Or with 1) and We can off bit by (And with 0) 
	ret=Number|(1<<position);
	printf("Number after setting bit to 1 = %d\n",ret);
	
}