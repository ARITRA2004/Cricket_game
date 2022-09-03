#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#define to 6
#define from 1
int rand_num;

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
