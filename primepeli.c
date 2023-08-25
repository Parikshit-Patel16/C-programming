//check if number is prime and pelindrome 
#include<stdio.h>
int pelindrome(int n)
{
    int m=n;
    int rev=0,rem=0;
	if (n>=0 && n<10 )   //single digit numbers are always pelindrome
	{
	    return n;
	}
	//find the reverse and check is reverse and normal number is same or not
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
    int k;
	for(k=2;k<=n/2;k++)   //from 2 to n/2 check if number is divided with reminder 0 or not
	{
	    if(n%k==0)
	    {
			return -1;
	    }
	}
	return n;
}

int main(){
	int x,i,y,a,temp = 0;
	printf("Input two numbers (separated by a space):\n");
	scanf("%d%d",&x,&y); //Ask for starting and ending range from user
	printf("List of prime palindromes:\n");
	for(i=x;i<=y;i++)
	{
		temp = pelindrome(i); //first check for pelindrome 
		if(temp!=-1)  //if pelindrome then check for prime
		{
		a=prime(temp);
		if(a!=-1)
		printf("%d\n",a);
		}
	}
}
