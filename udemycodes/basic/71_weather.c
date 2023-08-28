#include<stdio.h>
#define YEARS 5
#define MONTHS 12
int main()
{
	//last 5 year 
	float rain[YEARS][MONTHS]=
	{
		{4.0,3.5,6.6,2.3,1.4,5.5,6.3,6.3,4.4,4.5,7.0,1.4},
		{4.4,6.5,6.1,2.3,2.4,5.4,2.1,6.3,2.4,5.5,6.0,1.3},
		{2.0,5.5,4.6,2.3,3.4,5.6,3.3,4.3,3.3,2.2,5.0,1.5},
		{3.5,2.5,2.4,2.3,4.4,5.7,7.1,5.7,4.5,2.1,4.0,1.2},
		{6.0,4.5,4.4,2.3,5.4,5.8,0.3,6.0,3.2,3.5,3.0,1.0}
	};
	int year,month;
	float total=0,subtotal=0;
	printf("Year  Rain\n\n");
	for(year=0;year<YEARS;year++)
	{
	    subtotal=0;
		for(month=0;month<MONTHS;month++)
		{
			subtotal += rain[year][month];
		}
		printf("%d  %.2f\n",2019+year,subtotal);
		total+=subtotal;
	}
	printf("Yearly Average is = %.2f\n",total/YEARS);
	
	printf("Monthly Average is\n");
	printf("Jan   Fab   mar   apr   may   jun   jul   aug   sep   oct   nov   dec\n");
	for(month=0;month<MONTHS;month++) 
	{
	    subtotal=0;
		for(year=0;year<YEARS;year++)
		{
			subtotal += rain[year][month];
		}
		printf("%.2f  ",subtotal/YEARS);
	}
	
	return 0;
}