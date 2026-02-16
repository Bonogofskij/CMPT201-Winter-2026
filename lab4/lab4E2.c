/*------------------------------------------
Student’s Name:             June Bonogofski
Lab 4:                      lab4E2.c
Lab Section:                X01-L
Lab Instructor’s Name:      Dhara Wagh
Lecture Instructor’s Name:  Ardy RD
--------------------------------------------*/


#include <stdio.h>              //printf(), scanf(), etc.


void readMatrix(int size, int array[size][size]) {   //Expects 0 as return value, takes size and a 2d array as arguments

    int i, j, tmp;                      //Initializes variables for looping and storing values from stdin

    for (i = 0; i < size; i++) {        //Look through every row
        for (j = 0; j < size; j++) {    //Look through every column
            scanf("%d", &tmp);          //Take int, store it as a tmp variable
            array[i][j] = tmp;          //Set current array position to the number
        }
    }
}

void diagMatrix(int size, int array[size][size]) {      //Void, as nothing needs to be returned

    int i, j = 0, diagonal[size];                       //Initializes variables for looping and storing values from array

    for (i = 0; i < size; i++, j++) {                   //Every row needs its matching column (eg row[0]col[0], then row[1]col[1] etc.)
        diagonal[i] = array[i][j];                      //Fill the diagaonal array with value
    }

    printf("The elements on the main diagonal are: ");  //Context for user

    for (i = 0; i < size; i++) {                        //For each entry in diagonal
        printf("%d ", diagonal[i]);                     //Print it
    }

    printf("\n");                                       //Newline for formatting within this function instead of main (looks nicer)
}

void revDiagMatrix(int size, int array[size][size]) {   //Given a size and array, prints the product of the secondary diagonal elements
    int i, j = size - 2, tmp = array[0][size-1];        //Initialize looping variables, and tmp as the first value

    for (i = 1; i < size; i++, j--) {                   //Since the 1st # is always at matrix[0][size-1], we start looping at i=1
        tmp *= array[i][j];                             //Multiply the values
    }
    printf("The product of the elements on the secondary diagonal is: %d\n", tmp);  //Printout for user feedback
}

void sumCol(int size, int array[size][size]) {  //Given a size and 2d array, print a sum of all columns in the array
    int i, j = 0, colSums[size];                //Initializing looping variables

    for (i = 0; i < size; i++) {                //Sets the sum array values to tops of columns    
        colSums[i] = array[j][i];               
    }

    for (i = 0; i < size; i++) {                //Loop through again, adding in row 2 and 3 to their respective positions         
        for (j = 1; j < size; j++) {
            colSums[i] += array[j][i];            
        }
    }

    for (i = 0; i < size; i++) {                //Loop again to print each row based on matrix size
        printf("The sum of elements in column %d is: %d\n", i + 1, colSums[i]);
    }
    
}


int main() {                                            //Main function, expecting 0 as return value
    printf("Enter the size of the matrix (max size 5): ");
    int matrixSize;                                     //Initializing int to store the size of matrix
    scanf("%d", &matrixSize);                           //Take size of matrix from user

    int matrix[matrixSize][matrixSize];                 //Initialize the matrix to pass to readMatrix

    readMatrix(matrixSize, matrix);                     //Read and fill the matrix with user values

    diagMatrix(matrixSize, matrix);                     //Read and display the diagonal elements of matrix

    revDiagMatrix(matrixSize, matrix);                  //Reads and displays the product of the reverse diagonal values

    sumCol(matrixSize, matrix);                        //Reads and displays the sums of each column in the array

    return 0;                                           //Exits main       
}