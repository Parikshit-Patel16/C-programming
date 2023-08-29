//See value of address that pointer contain as well as the value at that address and then find square of number using pass by refernece method
#include <stdio.h>
void square(int *ptr)
{
    *ptr=(*ptr)*(*ptr);
}
int main()
{
    int a,answer,*p=NULL;
    printf("Enter Value:-");
    scanf("%d",&a);
    p=&a;
    printf("Address of a=%p\n",&a);
    printf("Value of P=%p\n",p);
    printf("Value at address that p is pointing to is=%d\n",*p);
    printf("Address of P is=%p\n",&p);
    square(p);
    printf("%d",*p);
    return 0;
}