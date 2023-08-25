#include<stdio.h>
void main()
{
int i=0,n;
printf("Enter Number:-");
scanf("%d",&n);
printf("prime factor of given number\n");
while(n%2==0)
{
	printf("%d,",2);
	n=n/2;
}
for(i=3;i<n/2;i=i+2)
{
	while(n%i==0)
	{
		printf("%d,",i);
			n=n/i;
	}

}
if(n>2)
	printf("%d",n);
}
