#include "main.h"
/**
* create_file - Entry point
* Description - A function that creates a file
* *@filename: the function accepts an input saved into filename
* *@letters: letters is the number of letters it should read and print
* Return: Success (1)
*/
int toReturn(int toCheck);
int create_file(const char *filename, char *text_content)
{
int toOpen, toWrite;
int contentLen = 0;

if (filename == NULL)
return (-1);

while(text_content[contentLen] != '\0')
contentLen++;

/* Opening of the file */
toOpen = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
/* To check if there is an error of some sort */
toReturn(toOpen);

/* Writing the already read file */
toWrite = write(STDOUT_FILENO, text_content, contentLen);
/* To check if there is an error of some sort */
toReturn(toWrite);

close(toOpen);

return (1);
}

int toReturn(int toCheck)
{
if (toCheck == -1 )
return (-1);
}
