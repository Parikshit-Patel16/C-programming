//6=1*6,6=2*3,6=3*2,6+6*1:- 1+2+3=6 so perfect
#include<stdio.h>
void main()
{
	int n,m,j,i,sum=0,rem;
	printf("Enter Range:-");
	scanf("%d",&j);
	for(m=1;m<=j;m++)
	{
	n=m;
	for(i=1;i<=m/2;i++)
	{
	rem=n%i;
	{
		if(rem==0)
		{
			sum=sum+i;
		}

	}
	}
if(sum==m)
	printf("%d-Perfect\n",m);
rem=0;
sum=0;
}
}
