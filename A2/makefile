#/*------------------------------------------
#Student’s Name:            June Bonogofski
#Assignment #2            	makefile
#Lab Section:               X01-L
#Lab Instructor’s Name:     Dhara Wagh
#Lecture Instructor’s Name: Ardy RD
#--------------------------------------------*/

CC =gcc
CFLAGS =-Wall -std=c99 -g
TEST = testing

test: testPrime testHash testHTable		#Runs all the test programs in the dependancy list

testPrime: $(TEST)/testPrime	#Compiles testPrime and checks if the prime function still returns correct value
	./$(TEST)/testPrime > $(TEST)/testPrimeOut.txt
	diff $(TEST)/testPrimeOut.txt $(TEST)/testPrimeCorrect.txt

testHash: $(TEST)/testHash		#Compiles testHash and checks if the prime function still returns correct value
	./$(TEST)/testHash > $(TEST)/testHashOut.txt
	diff $(TEST)/testHashOut.txt $(TEST)/testHashCorrect.txt

testHTable: $(TEST)/testHTable
	./testing/testHTable

$(TEST)/testPrime: $(TEST)/testPrime.o $(TEST)/findPrime.o	#Makes testPrime out of testPrime.o and findPrime.o
	$(CC) $(CFLAGS) -o $@ $^

$(TEST)/testHash: $(TEST)/testHash.o $(TEST)/ht.o	#Makes testHash out of testHash.o and ht.o
	$(CC) $(CFLAGS) -o $@ $^

$(TEST)/testHTable: $(TEST)/testHTable.o $(TEST)/ht.o
	$(CC) $(CFLAGS) -o $@ $^

$(TEST)/%.o: %.c | $(TEST)		#Compiles .o file from the named .c file
	$(CC) $(CFLAGS) -c $^ -o $@

clean:		#Removes .gz, .o, executables and test*Out files, then clears the terminal window because I like it
	rm -f *.o $(TEST)/*.o *.gch $(TEST)/*.gch *.gz findPrime $(TEST)/testPrime $(TEST)/testHash $(TEST)/testHTable $(TEST)/*Out.txt
	clear

tar:		#Make tarball of given final files
	tar -zcvf homework_help_bonogofskij_multdefinitions.tar.gz makefile ht.c ht.h ht_impl.h $(TEST)/*