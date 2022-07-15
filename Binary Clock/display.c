
   CSC:210 - Dr. Roosen
   Project 2: Binary Clock, display.c
   3/18/2022
*/
 #include "display.h"
 #include "ncurses.h"
 #include "math.h"

 #define WHITE 1
 #define GREEN 2
 #define BLUE 3
 #define RED 4
 #define BLACK 5
 
 int open_display(void){
      initscr();
      return 1;
  }
 
  void display_time(int hours, int minutes, int seconds){
      display_hours(hours);
      display_minutes(minutes);
      display_seconds(seconds);
  }
 
  void display_colons(void){
      start_color();
      init_pair(WHITE,COLOR_WHITE,COLOR_WHITE);
      attron(COLOR_PAIR(WHITE));
      for(int raw=2; raw<=6; raw++){
          for(int col=2;col<=6;col++){
              if(col != 4 && raw != 4)
                  mvaddch(raw,col,'#');
            }
       }
      refresh();
  }
 
  void display_hours(int hours){
      start_color();
      init_pair(BLUE,COLOR_BLUE,COLOR_BLUE);
      attron(COLOR_PAIR(BLUE));
      while(hours != 0){
          for(int raw = 7; raw >= 2; raw--){
              if(hours % 2 == 1){
                  mvaddch(raw,1,'#');
                  hours = hours / 2;
              }
          }
      }
  }
 
  void display_minutes(int minutes){
      start_color();
      init_pair(GREEN,COLOR_GREEN,COLOR_GREEN);
      attron(COLOR_PAIR(GREEN));
      while(minutes != 0){
         for(int raw = 7; raw>=2;raw--){
            if(minutes % 2==1){
               mvaddch(raw,4,'#');
              refresh();
            }
           minutes=minutes/2;
         }
      }
  }
  void display_seconds(int second){
      start_color();
      init_pair(RED,COLOR_RED,COLOR_RED);
      attron(COLOR_PAIR(RED));
      while(second != 0){
          for(int row=7;row>=2;row--){
              if(second % 2==1){
                  mvaddch(row,7,'#');
                  refresh();
              }
              second=second/2;
          }
      }
  }
  void close_display(void){
      endwin();
  }