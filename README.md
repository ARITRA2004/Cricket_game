# Cricket_game
this is a so basic programme . 
so , in this programme  I make a cricket game using C language  . 
 which things i have used 
  1. rendom number generations
  2. switch ,case
  3. loop [ do while ]
  
The Hader Files ->

    #include <stdio.h>
    #include <conio.h>
    #include <stdlib.h>
    #include <windows.h>

The Variables ->
  (in the main fucntion)
     
        i=0;
	    score=0;
	    choice;
  
  Globaly
  
      rand_num 
 
How i generate the random numbres
  declear some value globaly
  
      #define to 6
      #define from 1
      int rand_num; // use to store the randome numbers
      
the main logic 

         srand(time(NULL));  //  it will genrate the randome numbers with the respect of time
	     rand_num = (rand() % (to - from) + 1) + from;    // this two lines
