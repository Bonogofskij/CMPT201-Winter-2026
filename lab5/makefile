#--------------------------------------------
#Student’s Name:             June Bonogofski
#Lab #5               		lab4E1.c
#Lab Section:                X01-L
#Lab Instructor’s Name:      Dhara Wagh
#Lecture Instructor’s Name:  Ardy RD
#--------------------------------------------

CC =gcc
CFLAGS =-Wall -std=c99

lab5E1: dynamicArray.o lab5E1.c
	$(CC) $(CFLAGS) $? -o $@

lab5E2: stuff.o lab5E2.c
	$(CC) $(CFLAGS) $? -o $@

tar:
	tar -zcvf cmpt_201_Lab_5_JDB.tar.gz ../lab5/makefile ../lab5/dynamicArray.h /lab5/dynamicArray.c /lab5/lab5E1.c /lab5/stuff.h /lab5/stuff.c /lab5/Lab5E2.c

clean:
	rm -f *.o lab5E1 lab5E2 *.gz