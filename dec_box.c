/*
4 4 4 4 4 4 4 
4 3 3 3 3 3 4 
4 3 2 2 2 3 4 
4 3 2 1 2 3 4 
4 3 2 2 2 3 4 
4 3 3 3 3 3 4 
4 4 4 4 4 4 4 
*/
#include<stdio.h>
void main()
{
int n,j,i,a,b;
printf("Enter Max Number:-");
scanf("%d",&n);
int m=2*n;
for(i=1;i<m;i++)
{
	for(j=1;j<m;j++)
	{
		if(i<=m/2 && j<=m/2)
		{
		    if(j<i)
		    {
		        printf("%d ",n+1-j);
		    }
		    else if(j>=i)
		    {
		        printf("%d ",n+1-i);
		    }
		}
		
		else if(i<=m/2 && j>m/2)
		{
		    if(j<m-i)
		    {
		        printf("%d ",n+1-i);
		    }
		    else if(j>=m-i)
		    {
		        printf("%d ",j+1-n);
		    }
		}
		
		else if(i>m/2 && j<=m/2)
		{
		    if(j<=m-i)
		    {
		        printf("%d ",n-j+1);
		    }
		    else if(j>m-i)
		    {
		        printf("%d ",i+1-n);
		    }
		}
		
		else if(i>m/2 && j>m/2)
		{
		    if(j>=i)
		    {
		        printf("%d ",j+1-n);
		    }
		    else if(j<i)
		    {
		        printf("%d ",i+1-n);
		    }
		}
		
	}
printf("\n");
}
}