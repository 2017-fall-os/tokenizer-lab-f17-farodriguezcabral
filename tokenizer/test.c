#include <stdio.h>
#include <stdlib.h> //for malloc
#include "mytoc.h"

#define BUFLEN 100

//int compare(char **buffer);
//char ** mytoc(char *str, char delim);

int main (void){
  //char *input = (char*)malloc(sizeof(char)*5);
  //Get the input from the user. Input must be no greater than 100 characters
  int exit = 1;
  
  char *input = "Hello world";
  char user[BUFLEN];
  char ** test = mytoc(input, ' ');

  for(int i = 0; test[i] != '\0'; i++){
    write(1,"&",1);
    write(1,test[1],5);
  }
  
  while(exit){

    
    input = (char*)malloc(50);
    //Print dollar symbol on console
    read(0,user,100);
    write(1,"$",1);
    write(1,&input,sizeof(*input));
    // write(1,"Before compare",5);
    // exit = compare(&input);
    //write(1,"after exit",8);
    // free(input);
    //write(1,"after freeing",10);
    
  }
  return 0;
}


int compare(char **buffer){
  char *end_loop = "exit";
  
  for(; **buffer == *end_loop; **buffer++, *end_loop++){
    if(*buffer == '\0')
      return 0;   
  }
  
  return **buffer - *end_loop;
}
