//n and k will be given which is even number anf target value respectively....We have to find that odd number which is less that n and it's binarly's sum should be atmost k

#include<stdio.h>

int main(){
    int n,k,count=0,rem,sum=0;
	printf("Enter even number");
	scanf("%d",&n);
	printf("Enter target value");
	scanf("%d",&k);
    int m,i,j;
for(j=k;j>0;j--)    //Used to reduce target value by 1.
{
  for(i=n-1;i>0;i=i-2) //i=odd numbers less that n.
   {
    m=i; //m= current odd number
	//While loop will be used to find sum of binary of current number
    while(m!=0)
    {
        rem=m%2;
        sum=sum+rem;
        m=m/2;
    }
    if(sum==j)   //check if sum is equal to target value or no
    {
        printf("Number is %d",i);
        count++;
        break;
    }
    sum=0;
   }
   if(count!=0)
		break;
}
  return 0;
}
