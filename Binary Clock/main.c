   /* Christopher Yonek
   CSC:210 - Dr. Roosen
   Project 2: Binary Clock, main.c
   3/18/2022
*/
  
  #include "display.h"
  #include "ncurses.h"
  #include <unistd.h>
  #include <stdio.h>
  #include <stdlib.h>
  #include <time.h>
 
  int main(int argc, char *argv[])
  {
          int hour;
          int minute;
          int second = second;
          printf("Enter your hour: ");
          scanf("%d",&hour);
              printf("\nEnter your minute: ");
                  scanf("%d",&minute);
                      printf("\nEnter your second: ");
                          scanf("%d",&second);
 
            while(1){
                 system("clear");
                 printf("%02d : %02d : %02d ",hour,minute,second);
                 fflush(stdout);
                 open_display();
                 display_colons();
                 display_time(hour,minute,second);
                 sleep(1);
                 close_display();
 
                 second++;
 
                         if(second==60){
                         minute+=1;
                         second=0;
                         }
                        if(minute==60){
                            hour+=1;
                            minute=0;
                        }
                        if(hour==24){
                            hour=0;
                            minute=0;
                            second=0;
                        }
                       // sleep(1);
            }
            return 0;
  }