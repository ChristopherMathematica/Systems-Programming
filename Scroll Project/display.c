/* Christopher Yonek
   CSC:210 - Dr. Roosen
   Scroll Project: Display.c
   5/4/2022
*/

#include <ncurses.h>
#include "scroll.h"
#define WHITE 1
#define BLACK 0

 void openDisplay(void){
     initscr();
     noecho();
     curs_set(FALSE);
     start_color();
     init_pair(WHITE,COLOR_WHITE,COLOR_WHITE);
     attron(COLOR_PAIR(WHITE));
 }

 void closeDisplay(void){
     endwin();
 }

 void clearDisplay(void){
     clear();
 }

 void displayLetter(char letter,int x,int y){
     refresh();
     if(letter == 'C'){
        mvprintw(y, x,"#####");
        mvprintw(1+y,x,"#");
        mvprintw(2+y,x,"#");
        mvprintw(3+y,x,"#");
        mvprintw(4+y,x,"#####");
  }

     if(letter == 'Y'){
        mvprintw(0+y,x,"#");
        mvprintw(1+y,x+1,"#");
        mvprintw(2+y,x+2,"#");
        mvprintw(1+y,x+3,"#");
        mvprintw(3+y,x+2,"#");
        mvprintw(4+y,x+2,"#");
        mvprintw(0+y,x+4,"#");
  }
     refresh();
 }