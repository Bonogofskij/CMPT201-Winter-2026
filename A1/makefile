#Student’s Name:             June Bonogofski
#Assignment #1				 makefile
#Lab Section:                X01-L
#Lab Instructor’s Name:      Dhara Wagh
#Lecture Instructor’s Name:  Ardy RD

CC =gcc
CFLAGS =-Wall -std=c99
LDFLAGS = -lm

cardinalSort: cardinalSort.c
	$(CC) $(CLAGS) cardinalSort.c -o cardinalSort

testCardinalSort:
	./cardinalSort <testCardinalSortIn.txt >testCardinalSortOut.txt
	diff testCardinalSortOut.txt correctCardinalSort.txt

cc: countingCovid.c
	$(CC) $(CFLAGS) countingCovid.c -o cc

testcc: countingCovid.c
	./cc < covidData_100.csv

clean: cardinalSort testCardinalSortOut.txt cc
	rm cardinalSort testCardinalSortOut.txt cc