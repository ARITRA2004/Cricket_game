 #include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
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


void generatin_random_numbers(){
    srand(time(NULL));
    rand_num = (rand() % (to - from) + 1) + from;
//  printf("\n  the random number is : %d",rand_num);
}

void main(){
    //file handeling variables
    FILE *filename;
    char data[10];
    
    //realtime
    time_t t;
    time(&t);
    
    int i=0;
    int score=0;
    int choice;
    int counter=1;
    do{
        printf("\n 1-> 1 run    \n 2-> 2 runs   \n 3-> 3 runs   \n 4-> 4 runs   \n 6-> 6 runs");
        printf("\n\n    Hit your bat  : ");
        scanf("%d",&choice);
//      printf("    you choose %d",choice);
        generatin_random_numbers();
        switch(choice){
            case 1:
                printf("\n  1 run  ");
                score +=1;
                printf("\n  total run  %d",score);
                break;
                
            case 2:
                printf("\n  2 runs  ");
                score +=2;
                printf("\n  total run  %d",score);
                break;
                
            case 3:
                printf("\n  3 runs  ");
                score +=3;
                printf("\n  total run  %d",score);
                break;
            case 4:
                printf("\n  4 runs  ");
                score +=4;
                printf("\n  total run  %d",score);
                break;
            case 6:
                printf("\n  6 runs  ");
                score +=6;
                printf("\n  total run  %d",score);
                break;
        }
    }while(choice != rand_num); //%[^\n]s
    printf("\n\n    out [ try next time ] ");
    printf("\n\n    Total run is :  %d",score);

    //file handeling 
    filename = fopen("cricketdata.txt","a+");
    if(filename==NULL){
        printf("\n\n    cricketdata.txt file failed to open  ");
    }
    else{
        fprintf(filename,"\n  %s -- The score is %d\n",ctime(&t),score);
        fclose(filename);
        printf("\n\n    data added ");
    }
    getch();
}
