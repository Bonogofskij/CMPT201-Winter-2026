CC =gcc
CFLAGS =-Wall -std=c99

E1: lab4E1.c
	$(CC) $(CFLAGS) -o lab4E1 lab4E1.c

E2: lab4E2.c
	$(CC) $(CFLAGS) lab4E2.c -o lab4E2

clean:
	rm lab4E1 lab4E2 cmpt_201_lab_4_JDB.tar.gz

tar: 
	tar -zcvf cmpt_201_lab_4_JDB.tar.gz ../lab4/lab4E1.c ../lab4/lab4E2.c ../lab4/makefile