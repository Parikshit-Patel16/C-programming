#include<stdio.h>
void main()
{
	int n,i;
	printf("enter size:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter element %d:",i+1);
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		if(a[i]==4)
		{
			a[i]=1;
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[j]!=1)
				{
					a[i]=a[j];
					a[j]=1;
					break;
				}
			}
		}

	}
	for(i=0;i<n;i++)
	{
		printf("%d,",a[i]);
	}
}
