//6=1*6,6=2*3,6=3*2,6=6*1:- 1+2+3=6 so perfect
#include<stdio.h>
void main()
{
	int num,range,i,sum=0,rem;
	printf("Enter Range:-");
	scanf("%d",&range);
	for(num=1;num<=range;num++)
	{
	    for(i=1;i<=num/2;i++)
	    {
	        rem=num%i;
	            if(rem==0)
		        sum=sum+i;
	    }
        if(sum==num)
	    printf("%d-Perfect\n",num);
    rem=0;
    sum=0;
    }
}
