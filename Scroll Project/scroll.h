  #ifndef SCROLL_H
  #define SCROLL_H
 
  int checkInput(int);
  void openInput(void);
  void moveLetter(void);
  void closeInput(void);
 
  void openDisplay(void);
  void closeDisplay(void);
  void clearDisplay(void);
  void displayLetter(char letter,int x,int y);
 
 
  #endif
 
 
  extern int x, max_x, next_x, xDirection;
  extern int y, max_y, next_y, yDirection;