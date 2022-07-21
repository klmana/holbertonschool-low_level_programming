#include "main.h"
/**
 *_strlen - function that returns the length of a string.
 *@b:provides a similar function: strlen
 *Return: 0
 */
int _strlen(char *b)
{
	int a;

	a = 0;

	while (b[a] != '\0')
	{
		a = a + 1;
	}
	return (a);
}

/**
 *append_text_to_file - function that appends text at the end of a file
 *@filename:is the name of the file to create
 *@text_content: is a NULL terminated string to add at the end of the file
 *Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int forPrint;
	/* case 1 error if there is no filename */
	if (filename == NULL)
		return (-1);
	/* create file that append text at the end of the file */
	forPrint = open(filename, O_WRONLY | O_APPEND);
	/* case 2.1 file cant be created or writen or fails */
	if (forPrint == -1)
		return (-1);
	/* case 2.2 creates the file then close it and return 1*/
	if (text_content != NULL)
		write(forPrint, text_content, _strlen(text_content));
	close(forPrint);
	return (1);
}
