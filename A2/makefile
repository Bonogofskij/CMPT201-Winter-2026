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

test: testPrime

testPrime: $(TEST)/testPrime
	./$(TEST)/testPrime > $(TEST)/testPrimeOut.txt
	diff $(TEST)/testPrimeOut.txt $(TEST)/testPrimeCorrect.txt

testHash: $(TEST)/testHash
	./$(TEST)/testHash

$(TEST)/testPrime: $(TEST)/testPrime.o $(TEST)/findPrime.o
	$(CC) $(CFLAGS) -o $@ $^

$(TEST)/testHash: $(TEST)/testHash.o $(TEST)/ht.o
	$(CC) $(CFLAGS) -o $@ $^

$(TEST)/%.o: %.c | $(TEST)
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -f *.o $(TEST)/*.o *.gch $(TEST)/*.gch *.gz findPrime $(TEST)/testPrime $(TEST)/testPrimeOut.txt
	clear

tar:
	tar -zcvf homework_help_bonogofskij_multdefinitions.tar.gz makefile ht.c ht.h ht_impl.h