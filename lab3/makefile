CC = gcc
CFLAGS =-Wall -std=c99

E1: lab3E1.c
	$(CC) $(CFLAGS) -o lab3E1 lab3E1.c

E2: lab3E2.c
	$(CC) $(CFLAGS) -o lab3E2 lab3E2.c -lm

E3: 
	$(CC) $(CFLAGS) -c change.c change.h
	$(CC) $(CFLAGS) -c lab3E3.c -lm
	$(CC) $(CFLAGS) -o lab3E3 lab3E3.o change.o -lm

clean:
	rm lab3E1 lab3E2 echo change.h.gch change.o lab3E3.o lab3E3

echo:
	$(CC) $(CFLAGS) -o echo echoNum.c -lm