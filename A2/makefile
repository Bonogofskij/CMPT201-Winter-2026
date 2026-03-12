#/*------------------------------------------
#Student’s Name:            June Bonogofski
#Assignment #2            	makefile
#Lab Section:               X01-L
#Lab Instructor’s Name:     Dhara Wagh
#Lecture Instructor’s Name: Ardy RD
#--------------------------------------------*/

CC =gcc
CFLAGS =-Wall -std=c99 -g

testNode:
	make hto
	$(CC) $(CFLAGS) testNode.c -c
	$(CC) $(CFLAGS) ht.o testNode.o -o testNode

testHT:
	make hto
	$(CC) $(CFLAGS) testHT.c ht.c -o testHT

hto: ht.h ht_impl.h
	$(CC) $(CFLAGS) ht.c ht.h -c

clean:
	rm -f *.o testing/*.o *.gch testing/*.gch *.gz testNode testHT

tar:
	tar -zcvf homework_help_bonogofskij_multdefinitions.tar.gz makefile ht.c ht.h ht_impl.h testHT.c 