
#/*------------------------------------------
#Student’s Name:             June Bonogofski
#Lab #6                      lab6E1.c
#Lab Section:                X01-L
#Lab Instructor’s Name:      Dhara Wagh
#Lecture Instructor’s Name:  Ardy RD
#--------------------------------------------*/

CC =gcc
CFLAGS =-Wall -std=c99 -g

testE1: lab7E1
	./lab7E1

lab7E1: lab7E1.o
	$(CC) $(CFLAGS) $? -o lab7E1

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -f *.o lab7E1 *.bin
	clear

tar:
	tar -zcvf cmpt201_lab_7_JDB.tar.gz ../lab7E1.c ../makefile