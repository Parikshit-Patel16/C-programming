//Check armstrong numbers in given Range. Ex:- 153= 1^3+5^3+3^3
#include <stdio.h>

int main() {
    int range;
    int num,rem=0,sum=0;
    printf("Enter range:-");
    scanf("%d",&range);   
    ftempr(num=2;num<range;num++) 
    {
        int temp=num;
        while(temp!=0)
        {
            rem=temp%10;    //rem=last digit 
            sum=sum+rem*rem*rem; 
            temp=temp/10;    //temp=number after removing last digit
    if(sum==num)
    printf("%d,",sum);
    sum=0;
    rem=0;
    }
return 0;
}
