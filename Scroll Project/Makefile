 Makefile: main.c display.c input.c
        gcc -o scroll main.c display.c input.c -I. -lncurses
 input.o: input.c
         cc -c input.c -o input.o

 display.o: display.c
         cc -c display.c -o display.o

 main.o: main.c
         cc -c main.c -o main.o

 all: main.o display.o input.o
         cc -c main.c -o main.o
         cc -c display.c -o display.o
         cc -c input.c -o input.o
 clean:
         rm main.o display.o input.o input main display

 run:
         ./scroll
