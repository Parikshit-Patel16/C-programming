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
int number,j,i; //i=row,j=col
printf("Enter Max Number:-");
scanf("%d",&number); 
int m=2*number; //m=total no of (col/row)+1;
for(i=1;i<m;i++) //to iterate in Rows
{
	for(j=1;j<m;j++) //to iterate in cols
	{
		//divided whole square in 4 parts and implemented logic seperately for each
		if(i<=m/2 && j<=m/2)  //first part
		{
		    if(j<i)
		    {
		        printf("%d ",number+1-j);
		    }
		    else if(j>=i)
		    {
		        printf("%d ",number+1-i);
		    }
		}
		
		else if(i<=m/2 && j>m/2) //second part
		{
		    if(j<m-i)
		    {
		        printf("%d ",number+1-i);
		    }
		    else if(j>=m-i)
		    {
		        printf("%d ",j+1-number);
		    }
		}
		
		else if(i>m/2 && j<=m/2) //Third part
		{
		    if(j<=m-i)
		    {
		        printf("%d ",number-j+1);
		    }
		    else if(j>m-i)
		    {
		        printf("%d ",i+1-number);
		    }
		}
		
		else if(i>m/2 && j>m/2) //Fourth part
		{
		    if(j>=i)
		    {
		        printf("%d ",j+1-number);
		    }
		    else if(j<i)
		    {
		        printf("%d ",i+1-number);
		    }
		}
		
	}
printf("\n");
}
}