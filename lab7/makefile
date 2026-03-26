
#/*------------------------------------------
#Student’s Name:             June Bonogofski
#Lab #6                      lab6E1.c
#Lab Section:                X01-L
#Lab Instructor’s Name:      Dhara Wagh
#Lecture Instructor’s Name:  Ardy RD
#--------------------------------------------*/

CC =gcc
CFLAGS =-Wall -std=c99 -g
TEST =testing

test: $(TEST)/testE1

$(TEST)/testE1: $(TEST)/lab7E1.o
	$(CC) $(CFLAGS) -o $@ $^

$(TEST)/lab7E1.o: lab7E1.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -f *.o