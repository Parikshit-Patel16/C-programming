//ENUM
#include<stdio.h>
#include<stdlib.h>
int main()
{
	enum company {google,facebook,xerox,yahoo,ebay,microsoft}; //define
	enum company XEROX=xerox;
	enum company GOOGLE=google;
	enum company EBAY=ebay;
	printf("Xerox=%d\n",XEROX);
	printf("Google=%d\n",GOOGLE);
	printf("Ebay=%d\n",EBAY);
	return 0;
}