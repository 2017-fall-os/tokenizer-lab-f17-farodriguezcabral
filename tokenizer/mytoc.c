#include <stdio.h>
#include <stdlib.h> //for malloc
#include "mytoc.h"

char **mytoc(char *str, char delim){
  char **tokenVec;
  //helper char pointer to hold word to be stored
  char *copyStr;
  int numOfTokens = 0;
  int charCount = 0;
  //Count number of tokens contained on string 
  for(; *str != '\0'; *str++){
    if(*str == delim)
      numOfTokens++;
  }
  //write(1,"5",1);
  //allocate enough memory to store each token and '\0'
  tokenVec = (char**)calloc(numOfTokens+1, sizeof(char*));
  //  tokenVec[numOfTokens+1] = '\0';
 
  //Count number of characters contained on each token
  for(int tokenIndex = 0; *str != '\0'; *str++,tokenIndex++){

    if(*str == delim){
      //allocate enough memory for each character and '\0'
      tokenVec[tokenIndex] = (char*)malloc(charCount+1);
      //allocate memory for helper string
      copyStr = (char *)malloc(charCount+1);
      for(int i = charCount; i >= 0; i--){
	copyStr[charCount-i] = str[charCount-i];
      }
      copyStr[charCount+1] = '\0';
      tokenVec[tokenIndex] = copyStr;
      write(1,"&&",1);
      charCount = 0;
     
    }
    else
      charCount++;

  }
  
 
  return tokenVec;


}