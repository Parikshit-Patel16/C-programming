#include<stdio.h>
#include<stdlib.h>
#include<conio.h> //to take input from keyboard and display
char board[10]={'0','1','2','3','4','5','6','7','8','9'};  //Array to represent box
int choice,player;


//Function to check winning condition 
int checkwin()
{
	//check if game is over or not and if over then check if anyone won the game or game is draw
	if((board[1]==board[2] && board[1] == board[3]) || (board[4]==board[5] && board[4]==board[6]) || (board[7]==board[8] && board[7]==board[9]) || (board[1]==board[4] && board[1] == board[7]) || (board[2]==board[5] && board[2] == board[8]) || (board[3]==board[6] && board[3] == board[9]) || (board[1]==board[5] && board[1] == board[9]) || (board[3]==board[5] && board[3] == board[7]))
	{
		return 1;    //WIN and over
	}
	else if(board[1]!='1' && board[2]!='2' && board[3]!='3' && board[4]!='4' && board[5]!='5' && board[6]!='6' && board[7]!='7' && board[8]!='8' && board[9]!='9')
	{
		return 0;    //DRAW and over
	}
	else
	{
		return -1;   //In progress
	}
}

void display()
{
	system(cls);  //clears screen everytime the function called
	printf("\n\nTic Tac Toe\n\n");
	printf("Player 1(X) - Player 2(O)\n\n");
	
	printf("%c | %c | %c \n---------\n%c | %c | %c \n---------\n%c | %c | %c \n",board[1],board[2],board[3],board[4],board[5],board[6],board[7],board[8],board[9]);
}
	
void writeboard(char mark) 
{
	if(choice==1&&board[1]=='1')
		board[1]=mark;
	else if(choice==2&&board[2]=='2')
		board[2]=mark;
	else if(choice==3&&board[3]=='3')
		board[3]=mark;
	else if(choice==4&&board[4]=='4')
		board[4]=mark;
	else if(choice==5&&board[5]=='5')
		board[5]=mark;
	else if(choice==6&&board[6]=='6')
		board[6]=mark;
	else if(choice==7&&board[7]=='7')
		board[7]=mark;
	else if(choice==8&&board[8]=='8')
		board[8]=mark;
	else if(choice==9&&board[9]=='9')
		board[9]=mark;
	else
	{
		printf("Invalid move");
		player=(player==1)?2:1;
		getch();
	}
}

int main()
{
	int status;
	char mark; 
	player=2;
	
	do{
	display();
	player = (player==2)?1:2; //Change player every time
	printf("Player %d, Enter Choice: ",player);
	scanf("%d",&choice);
	mark=(player==1)?'X':'O';
	writeboard(mark);
	status=checkwin();
 	}while(status==-1);
	
	if(status==1)
	{
	    display();
	    printf("\n----Player %d Win----\n",player);
	}
	if(status==0)
	{
	    printf("\n----Game Draw----\n");
	}
	return 0;
}