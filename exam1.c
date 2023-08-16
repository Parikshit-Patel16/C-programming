#include<stdio.h>

int main(){
    int n=10,k=4,count=0,rem,sum=0;
    int m,i;
    for(i=n-1;i>0;i=i-2)
    {
    m=i;
    while(m!=0)
    {
        rem=m%2;
        sum=sum+rem;
        m=m/2;
    }
    if(sum==k)
    {
        printf("Number is %d",i);
        count++;
        break;
    }
    sum=0;
    }
    if(count==0)
    {k=k-1;
        for(i=n-1;i>0;i=i-2)
    {
    m=i;
    while(m!=0)
    {
        rem=m%2;
        sum=sum+rem;
        m=m/2;
    }
    if(sum==k)
    {
        printf("Number is %d",i);
        count++;
        break;
    }
    sum=0;
    }
    }
    return 0;
}
