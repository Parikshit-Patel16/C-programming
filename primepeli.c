#include<stdio.h>
int pelindrome(int n)
{
    int m=n;
    int rev=0,rem=0;
	if (n>=0 && n<10 )
	{
	    return n;
	}
	else
	{
	    while(n!=0)
	    {
	        rem=n%10;
	        rev=rev*10+rem;
	        n=n/10;
	    }
	if(rev==m)
	{
	return rev;
	}
	else
	{
	    return -1;
	}
	}
}

int prime(int n)
{
    int count=0,k;
	for(k=2;k<=n/2;k++)
	{
	    if(n%k==0)
	    {
	        count++;
	    }
	}
	if(count==0)
	{
	    return n;
	}
	else
	{
	    return -1;
	}
}

int main(){
	int x,i,y,a,temp = 0;
	printf("Input two numbers (separated by a space):\n");
	scanf("%d%d",&x,&y);
	printf("List of prime palindromes:\n");
	for(i=x;i<=y;i++)
	{
		temp = pelindrome(i);
		if(temp!=-1)
		{
		a=prime(temp);
		if(a!=-1)
		printf("%d\n",a);
		}
	}
}
