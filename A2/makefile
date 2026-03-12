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
	$(CC) $(CFLAGS) testHT.c -c
	$(CC) $(CFLAGS) ht.o testHT.o -o testHT

hto: ht.h ht_impl.h ht.c
	$(CC) $(CFLAGS) $? -c

clean:
	rm -f *.o testing/*.o *.gch testing/*.gch testNode testHT