#Student’s Name:             June Bonogofski
#Assignment #1				 makefile
#Lab Section:                X01-L
#Lab Instructor’s Name:      Dhara Wagh
#Lecture Instructor’s Name:  Ardy RD

CC =gcc
CFLAGS =-Wall -std=c99
LDLIBS =-lm

all: cardinalSort countingCovid xTable squeeze
cardinalSort: cardinalSort.c
	$(CC) $(CFLAGS) $? -o $@

countingCovid: countingCovid.c
	$(CC) $(CFLAGS) $? -o $@

xTable: xTable.c
	$(CC) $(CFLAGS) $? -o $@ $(LDLIBS)

squeeze: squeeze.c
	$(CC) $(CFLAGS) $? -o $@

.PHONY:
testing: testCardinalSort testCountingCovid testXTable testSqueeze
testCardinalSort:
	./cardinalSort < testCardinalSortIn.txt > testCardinalSortOut.txt
	diff testCardinalSortOut.txt correctCardinalSort.txt

testCountingCovid:
	./countingCovid < covidData_100.csv | head

testSqueeze:
	./squeeze < testSqueezeIn.txt > testSqueezeOut.txt
	diff testSqueezeOut.txt testSqueezeCorrect.txt

clean:
	rm -f cardinalSort testCardinalSortOut.txt countingCovid xTable