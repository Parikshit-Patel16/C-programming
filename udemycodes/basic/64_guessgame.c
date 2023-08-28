//Guess the number
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int randomnumber=0;
	int guessednumber=0;
	int maxchance=5;
	time_t t;
	
	//initialize random number
	srand((unsigned) time(&t));
	randomnumber= rand() % 21;
	
	printf("Guess The Number\n\n");
	while(maxchance!=0)
	{
		printf("You Have %d Chances left\n",maxchance);
		printf("Enter your guessed number:-");
		scanf("%d",&guessednumber);
		if(guessednumber>randomnumber)
		{
			printf("Guessed number is high\n\n");
			maxchance--;
		}
		if(guessednumber<randomnumber)
		{
			printf("Guessed number is low\n\n");
			maxchance--;
		}
		if(guessednumber=randomnumber)
		{
			printf("Correct Number\n\n");
			return 0;
		}
	}
	printf("Sorry no more chances");
	return 0;
}
	