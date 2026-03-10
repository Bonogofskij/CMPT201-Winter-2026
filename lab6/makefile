#/*------------------------------------------
#Student’s Name:             June Bonogofski
#Lab #6                      lab6E1.c
#Lab Section:                X01-L
#Lab Instructor’s Name:      Dhara Wagh
#Lecture Instructor’s Name:  Ardy RD
#--------------------------------------------*/


CC =gcc
CFLAGS =-Wall -std=c99 -g

E1: link.c lab6E1.c
	$(CC) $(CFLAGS) link.c link.h -c
	$(CC) $(CFLAGS) lab6E1.c -c
	$(CC) $(CFLAGS) lab6E1.o link.o -o E1

tar:
	tar -zcvf cmpt_201_lab_6_JDB.tar.gz ../lab6/makefile ../lab6/link.c ../lab6/link.h ../lab6/lab6E1.c ../lab6/README

clean:
	rm -f *.o E1 *.gz *.gch