 //Name: Christopher Yonek
 //CISC210: Monogram Project
 //Dr. Roosen
 //Date: 2/24/2022
 #include <stdio.h>
 #include <unistd.h>
 #include <ncurses.h>
 #define WHITE 1
 #define BLACK 0
 void fill_pixels(uint16_t pixels[8][8], uint16_t color) {
         for(int i=0; i<8; i++) {
                     for(int j=0; j<8; j++) {
                                    pixels[i][j] = color;
                                          }
                            }
           }
  void draw_grid(uint16_t pixels[8][8]) {
         for(int y=0; y<8; y++) {
             move(y,0);
             for(int x=0; x<8; x++) {
                 if(pixels[7-x][y]) {
                     attron(COLOR_PAIR(pixels[7-x][y]));
                    addch('#');
                    attroff(COLOR_PAIR(pixels[7-x][y]));
                     } else {
                        addch(' ');
                                }
                            }
                 }
                 refresh();
   }
 
    int main(void){
          //uint16_t means non-negative two-byte intege
          uint16_t pixel[8][8]; //For the first letter
          uint16_t secPixel[8][8]; //For the second letter
          // Starts drawing in the terminal
          initscr();
          start_color();
          init_pair(WHITE, COLOR_WHITE, COLOR_WHITE);
          init_pair(BLACK, COLOR_BLACK, COLOR_BLACK);
          fill_pixels(pixel,BLACK);
          pixel[7][0]=WHITE;
          pixel[6][0]=WHITE;
          pixel[5][0]=WHITE;
          pixel[4][0]=WHITE;
          pixel[3][0]=WHITE;
          //Middle
          pixel[7][1]=WHITE;
          pixel[7][2]=WHITE;
          pixel[7][3]=WHITE;
          pixel[7][4]=WHITE;
          pixel[7][5]=WHITE;
          //Bottom of C
          pixel[7][5]=WHITE;
          pixel[6][5]=WHITE;
          pixel[5][5]=WHITE;
          pixel[4][5]=WHITE;
          pixel[3][5]=WHITE;
          draw_grid(pixel);
          sleep(1);
          fill_pixels(secPixel,BLACK); //Clear the screen
		  secPixel[3][5]=WHITE;  //First three are I
		  secPixel[3][4]=WHITE;  //The last four are the diagonals of Y
          secPixel[3][3]=WHITE;
          secPixel[2][2]=WHITE;
          secPixel[1][1]=WHITE;
          secPixel[4][2]=WHITE;
          secPixel[5][1]=WHITE;
          // secPixel[5]
          draw_grid(secPixel);
          sleep(1);
          endwin();
          return 0;
    }
