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
 *create_file - function that creates a file.
 *@filename:is the name of the file to create
 *@text_content: is a NULL terminated string to write to the file
 *Return: 1 on success, -1 on failure (file can not be created
 */
int create_file(const char *filename, char *text_content)
{
	int forPrint;
	/* case 1 error if there is no filename */
	if (filename == NULL)
		return (-1);
	/* create file with permission rw--- (chmod 0600) */
	forPrint = open(filename, O_CREAT | O_RDWR | O_TRUNC, 600);
	/* case 2.1 file cant be created or writen or fails */
	if (forPrint == -1)
		return (-1);
	/* case 2.2 creates the file then close it and return 1*/
	if (text_content != NULL)
		write(forPrint, text_content, _strlen(text_content));
	close(forPrint);
	return (1);
}
