//Francisco Rodriguez Cabral
#include <stdio.h>
#include <stdlib.h> //for malloc
#include "mytoc.h"

#define BUFLEN 100 //maximum lenght allowed for user input

int main (void){
  
  //Get the input from the user. Input must be no greater than 100 characters
  char *input = (char*)malloc(100);
  //test case provided on course website
  char ** test = mytoc("", ' ');
  //Print out the tokens from ** test
  for(int i = 0; test[i] != '\0'; i++){
    write(1,"|",1);
    write(1,test[i],sizeof(test[i])+1);
  }
  //start while loop to get input strings from user
  while(1){
    //print a new line
    write(1,'\n',1);
    //Print dollar symbol on console
    write(1,"$",1);
    read(0,input,BUFLEN);
    //store the tokens retrieved from the mytoc function call
    char ** tokens = mytoc(input,' ');
    for(int i = 0; tokens[i] != '\0'; i++){
      //separate each token
      write(1,"|",1);
      write(1,tokens[i],(sizeof(tokens[i]))+1);
    }
     write(1,'\n',1);
  }
  return 0;
}
