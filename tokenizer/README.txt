Francisco Rodriguez Cabral
UTEP ID: farodriguezcabral

For this assignment, I used the read() and write() functions in order to get
an input string from the user and print out the tokens of the string respectively.
Once the input was passed to the mytoc() function, a vector of pointers containing the tokens of the input string was returned. These tokens
were printed in a loop and separated by a "|".

A problem I found when trying to free the memory of the vector of pointers allocating the tokens so it could be reused for the next user input, an error was retrieve which I could not handle to avoid.

Also, the read and write functions we were asked by Dr. Freudenthal to implement retrieve some sort of a warning which I could not fix.

In order to test the program, a Makefile is provided were running the make command will create a test executable file which can be run by typing ./test.

Once the program is running, it will show the result of one of the test cases provided on the course website and right after this the user will be able
to input a string of his/her choice.
