  Makefile: main.c display.c
      gcc -o clock main.c display.c -I. -lncurses
 
  display.o: display.c
      cc -c display.c -o display.o
 
  main.o: main.c
      cc -c main.c -o main.o
 
  all: main.o display.o
      cc -c main.c -o main.o
      cc -c display.c -o display.o
 
  clean:
      rm main.o display.o
 
  run:
        bash clock.sh | ./clock
