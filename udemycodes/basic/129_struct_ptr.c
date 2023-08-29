#include<stdio.h>
#include<stdlib.h>
struct item
    {
		char *itemname;
		int quantity;
		float price;
		float amount;
	};

void readitem(struct item *i)
{
	printf("Enter Product Name:-");
	scanf("%s",i->itemname);
	printf("Enter Quantity:-");
	scanf("%d",&i->quantity);
	printf("Enter Price:-");
	scanf("%f",&i->price);
	
	i->amount=(float)(i->quantity)*(i->price);
}
void printitem(struct item *j)
{
	printf("\nItem name is %s\n",j->itemname);
	printf("Item Price is %f\n",j->price);
	printf("Item Quantity is %d\n",j->quantity);
	printf("Amount to be paid is %f\n",j->amount);
}
int main()
{
	struct item itm;
	struct item *pitm;
	pitm=&itm;
	pitm->itemname=(char *)malloc(20*sizeof(char));
	readitem(pitm);
	printitem(pitm);
	return 0;
}