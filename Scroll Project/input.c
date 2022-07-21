 /* Christopher Yonek
   CSC:210 - Dr. Roosen
   Scroll Project: input.c
   5/4/2022
*/
#include <ncurses.h>
#include <stdio.h>
#include "scroll.h"
#define EXTERN

int checkInput(int delay){
if(delay == 1){
     int ch = getch();
     if(ch != ERR){
        ungetch(ch);
        return 1;
     } else{
         return 0;
      }
   }
 }
 void openInput(void){
     if(checkInput(1)){
         switch(getch()){
                case 'a': xDirection = -1;
                          break;
                case 'd': xDirection = 1;
                          break;
                case 'w': yDirection = -1;
                          break;				
			    case 's': yDirection = 1;
                          break;
                case 'x': closeDisplay();
                          exit(0);
                default:  yDirection = 0;
                          xDirection = 0;
                          break;
         }
     }
  }

 void moveLetter(void){
     if(x>8){x=0;}
     if(y>8){y=0;}
     if(x<0){x=8;}
     if(y<0){y=8;}
     if (next_x >= max_x || next_x < 0) {
         xDirection*= -1;
         } else{
            x+= xDirection;
            }
     if (next_y >= max_y || next_y < 0) {
         yDirection*= -1;
         } else{
            y+= yDirection;
           }
 }
 
 void closeInput(void){
      //No Pi
   }