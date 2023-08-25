//In the given array.....replace the target value with 1 and then shift all 1s to the right size of the array without changing non 1s value's order.
#include<stdio.h>
void main()
{
	int size,i,target;
	printf("enter size:");
	scanf("%d",&size);  //Size of array
	int arr[size];   //Declare array
	for(i=0;i<size;i++) //Define array
	{
		printf("Enter element %d:",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter Target Value");
	scanf("%d",&target); //Enter target value to be replaced with 1
	
	for(i=0;i<size;i++)
	{
		if(arr[i]==target)
		{
			arr[i]=1;
		}
	}
	//Loop to shift all 1s to the right side of the array
	for(i=0;i<size;i++)
	{
		if(arr[i]==1)   
		{   //check for 1 from left and if we find 1...check next value which is not 1 and swap both values
			for(int j=i+1;j<size;j++)
			{
				if(arr[j]!=1)
				{
					arr[i]=arr[j];
					arr[j]=1;
					break;
				}
			}
		}

	}
	for(i=0;i<size;i++)
	{
		printf("%d,",arr[i]);
	}
}
