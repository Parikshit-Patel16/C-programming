#include <stdio.h>

int main() {
    int i,j;
    int n,count=0,rem=0,sum=0;
    printf("Enter range:-");
    scanf("%d",&i);
    for(n=2;n<i;n++)
    {
        int m=n;
        int o=n;
        while(o!=0)
        {
            rem=o%10;
            sum=sum+rem*rem*rem;
            o=o/10;
        }
    if(sum==m)
    printf("%d,",sum);
    sum=0;
    rem=0;
    //m=0;
    }
return 0;
}
