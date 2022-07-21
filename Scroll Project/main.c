 /* Christopher Yonek
   CSC:210 - Dr. Roosen
   Scroll Project: main.c
   5/4/2022
*/
 #include <ncurses.h>
 #include <unistd.h>
 #define BLACK 0
 #define WHITE 1
 #define DELAY 30000
 #include "scroll.h"
 #define EXTERN
 
  x = 0,max_x = 8, next_x = 0, xDirection = 0;
  y = 0, max_y = 8,next_y = 0, yDirection = 0;
  char letterProvided = 'C';
 
  int main(void){
     openDisplay();
     getmaxyx(stdscr, max_y, max_x);
     scrollok(stdscr, TRUE);
     while(1){
         clearDisplay();
         displayLetter(letterProvided,x,y);
          if(checkInput(1)){
             if(getch()==10){
                  if(letterProvided=='C'){
                      letterProvided = 'Y';
                  } else{
         letterProvided = 'C';
        }}}
             xDirection = 0;
             yDirection = 0;
             scrollok(stdscr, TRUE);
             openInput();
             usleep(DELAY);
             moveLetter();
      }
     closeDisplay();
  }

  void handler(){
  //No Pi
   }