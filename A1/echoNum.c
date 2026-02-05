/*echoNum.c 
Simple program which reads number in double precision from stdin
and prints them on the stdout.
It reads several lines of input until it encounters end of file
*/

#include <stdio.h>

int main(void){
  double number; //dobule precision required
  char tch;

  tch=getc(stdin);   //read one character from stdin
  while (tch=='\n')  //skip over newline characters  ('\n')
    tch=getc(stdin);

  while(tch!=EOF){        //If character is not end of file
    ungetc(tch,stdin);    //Put it back to stdin for further processing

    scanf("%lf",&number); //Read a number
    printf("%lf\n",number); //Print it

    tch=getchar();        //Prepare a new character for while's test

    while(tch=='\n')      //skip over newline characters ('\n')     
      tch=getc(stdin);
  }
  return(0);
}
