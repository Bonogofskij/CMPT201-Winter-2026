
#/*------------------------------------------
#Student’s Name:             June Bonogofski
#Lab #6                      lab6E1.c
#Lab Section:                X01-L
#Lab Instructor’s Name:      Dhara Wagh
#Lecture Instructor’s Name:  Ardy RD
#--------------------------------------------*/

CC =gcc
CFLAGS =-Wall -std=c99 -g

#Makes and runs lab7E1
test: lab7E1
	./lab7E1

#Makes lab7E1 from lab7E1.o
lab7E1: lab7E1.o
	$(CC) $(CFLAGS) $? -o lab7E1

#Makes a .o file from the same named .c
%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

#Remove all .o, .bin and .gz files, removes exectutable lab7E1
clean:
	rm -f *.o lab7E1 *.bin *.gz
	clear

#Makes a tarball with lab7/lab files
tar:
	tar -zcvf cmpt201_lab_7_JDB.tar.gz ../lab7/lab7E1.c ../lab7/makefile