#/*------------------------------------------
#Student’s Name:            June Bonogofski
#Assignment #2            	makefile
#Lab Section:               X01-L
#Lab Instructor’s Name:     Dhara Wagh
#Lecture Instructor’s Name: Ardy RD
#--------------------------------------------*/

CC =gcc
CFLAGS =-Wall -std=c99
TEST = testing

testPrime: $(TEST)/testPrime.o $(TEST)/findPrime.o
	$(CC) $(CFLAGS) -o $@ $^

$(TEST)/%.o : %.c | $(TEST)
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -f *.o testing/*.o *.gch testing/*.gch *.gz testNode testHT findPrime testPrime

tar:
	tar -zcvf homework_help_bonogofskij_multdefinitions.tar.gz makefile ht.c ht.h ht_impl.h testHT.c 