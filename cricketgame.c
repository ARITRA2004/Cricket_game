#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#define to 6
#define from 1
int rand_num;

/*void gotoxy(int x_cord , int y_cord){
	COORD c;
	c.X = x_cord;
	c.Y = y_cord;

	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), c);
}*/

/*void game_tagline()
{
	gotoxy(37,15);
	printf("+---------------------------------+");
	gotoxy(37,16);
	printf("|    welcome to the cricket game  |");
	gotoxy(37,17);
	printf("+---------------------------------+");
}*/

/*void comp_choice()
{
	rand_num = (rand() % (to - from) + 1) + from;
}

void main()
{
	int choice;
	int score = 0;
	game_tagline();
	printf("\n	To start the game press enter ");
	getch();
	printf("	enter your choice	");
	scanf("%d", &choice);
	do
	{
		comp_choice();
		if (choice == 1)
		{
			printf("%d run ", choice);
			if (choice == rand_num)
			{
				printf("\n out");
			}
			else
			{
				printf("\n	total run %d", (score = score + choice));
			}
		}
		else if (choice == 2)
		{
			printf("%d run ", choice);
			if (choice == rand_num)
			{
				printf("\n out");
			}
			else
			{
				printf("\n	total run %d", (score = score + choice));
			}
		}
		else if (choice == 3)
		{
			printf("%d run ", choice);
			if (choice == rand_num)
			{
				printf("\n out");
			}
			else
			{
				printf("\n	total run %d", (score = score + choice));
			}
		}
		else if (choice == 4)
		{
			printf("%d run ", choice);
			if (choice == rand_num)
			{
				printf("\n out");
			}
			else
			{
				printf("\n	total run %d", (score = score + choice));
			}
		}
		else if (choice == 6)
		{
			printf("%d run ", choice);
			if (choice == rand_num)
			{
				printf("\n out");
			}
			else
			{
				printf("\n	total run %d", (score = score + choice));
			}
		}
	} while ();
	printf("\n	out ");
	printf("\n	your totla run is  %d", score);
}*/

void generatin_random_numbers(){
	srand(time(NULL));
	rand_num = (rand() % (to - from) + 1) + from;
//	printf("\n	the random number is : %d",rand_num);
}

void main(){
	int i=0;
	int score=0;
	int choice;
	do{
		printf("\n 1-> 1 run	\n 2-> 2 runs	\n 3-> 3 runs	\n 4-> 4 runs	\n 6-> 6 runs");
		printf("\n\n	Hit your bat  : ");
		scanf("%d",&choice);
//		printf("	you choose %d",choice);
		generatin_random_numbers();
		switch(choice){
			case 1:
				printf("\n	1 run  ");
				score +=1;
				printf("\n	total run  %d",score);
				break;
			case 2:
				printf("\n	2 runs  ");
				score +=2;
				printf("\n	total run  %d",score);
				break;
			case 3:
				printf("\n	3 runs  ");
				score +=3;
				printf("\n	total run  %d",score);
				break;
			case 4:
				printf("\n	4 runs  ");
				score +=4;
				printf("\n	total run  %d",score);
				break;
			case 6:
				printf("\n	6 runs  ");
				score +=6;
				printf("\n	total run  %d",score);
				break;	
		}
	}while(choice != rand_num);
	printf("\n\n	out [ try next time ] ");
	printf("\n\n	Total run is :  %d",score);
	getch();
}
