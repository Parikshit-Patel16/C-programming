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
int number,j,i,current; //i=row,j=col
printf("Enter Max Number:-");
scanf("%d",&number); 
int m=2*number; //m=total no of (col/row)+1;
for(i=1;i<m;i++) //to iterate in Rows
{
	for(j=1;j<m;j++) //to iterate in columns
	{
		if(i<=m/2)
		{
		    if(j<=m/2)
			{
			    current=j<i?j:i;
		        printf("%d ",number+1-current);
		        continue;
		    }
		    else
		    {
		        current=j<m-i?number-i:j-number;
		        printf("%d ",current+1);
		        continue;
		    }
		}
		else
		{
		    if(j<=m/2)
		    {
		        current= j<=m-i?number-j:i-number;
		        printf("%d ",current+1);
		        continue;
		    }
		    else
		    {
		        current= j>=i?j:i;
		        printf("%d ",current+1-number);
		        continue;
		    }
		}
	}
printf("\n");
}
}