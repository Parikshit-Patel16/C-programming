//use single pointer and double pointer to check all the data related to them.
#include<stdio.h>
int main()
{
int a=5;
int *ptr=&a;
int **dbptr=&ptr;

printf("a=%d\n",a);
printf("&a=%d\n",&a);
printf("ptr=%d\n",ptr);
printf("*ptr=%d\n",*ptr);
printf("&ptr=%d\n",&ptr);
printf("dbptr=%d\n",dbptr);
printf("*dbptr=%d\n",*dbptr);
printf("**dbptr=%d\n",**dpbtr);
printf("&dbptr=%d\n",&dbptr);
return 0;
}