CC=gcc
CFLAGS=-Wall -std=c99 
LDLIBS=-lm

#p1:
#	gcc -Wall -std=c99 main.c numArray.c numMod.c -o lab2 -lm

#p2arrayc: numArray.c
#	gcc -Wall -std=c99 -c numArray.c numArray.h

#p2modc: numMod.c
#	gcc -Wall -std=c99 -c numMod.c numMod.h

#p2mainc: main.c
#	gcc -Wall -std=c99 -c main.c

#p2o: main.o numArray.o numMod.o
#	gcc -o lab2 main.o numArray.o numMod.o -lm

lab2: main.c numArray.c numMod.c #final part with CC and CFLAGS and LDLIBS, seperate compilation would just follow p2 with cflags and such in place
	$(CC) $(CFLAGS) main.c numArray.c numMod.c -o lab2 $(LDLIBS)

testing: lab2
	./lab2 < testLab2In > testLab2Out
	diff lab2Correct testLab2Out

clean:
	rm main.o numArray.o numArray.h.gch numMod.o numMod.h.gch lab2 testLab2Out

tar: lab2 main.c numArray.c numArray.h numMod.c numMod.h README testLab2In lab2Correct makefile
	tar -zcvf cmpt201_lab_2_JDB.tar.gz makefile main.c numArray.c numArray.h numMod.c numMod.h README lab2Correct testLab2In