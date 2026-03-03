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
	./cardinalSort < testing/testCardinalSortIn.txt > testing/testCardinalSortOut.txt
	diff testing/testCardinalSortOut.txt testing/correctCardinalSort.txt

testCountingCovid:
	./countingCovid < testing/covidData_100.csv | head

testXTable:
	./xTable > testing/xTableOut.txt
	diff testing/xTableOut.txt testing/xTableCorrect.txt

testSqueeze:
	./squeeze < testing/testSqueezeIn.txt > testing/testSqueezeOut.txt
	diff testing/testSqueezeOut.txt testing/testSqueezeCorrect.txt

clean:
	rm -f cardinalSort testing/testCardinalSortOut.txt countingCovid  xTable testing/xTableOut squeeze testing/testSqueezeOut.txt *.tar.gz 

tar: 
	tar -zcvf cmpt_201_assignment_1_JDB.tar.gz ../A1/makefile ../A1/cardinalSort.c ../A1/countingCovid.c ../A1/xTable.c ../A1/squeeze.c ../A1/README ../A1/testing/ 