#include "main.h"

/**
 *read_textfile - function reads text file & prints the POSIX standard output
 *@filename: the filename to read
 *@letters: the size to read
 *Return: the actual number of letters it could read and print
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t forPrint, forRead, forWrite;
	char *str;

	if (filename == NULL)
		return (0);
	/* Allocating memory for the number of letters to be display */
	str = malloc(sizeof(char) * letters);
	/* case 1 there is no string */
	if (str == NULL)
		return (0);
	/* case 2: string exists */
	/* Open the file for  writing and reading */
	forPrint = open(filename, O_RDWR);

	/* case 2.1: if the file can not be opened or read  */
	if (forPrint == -1)
	{
		free(str);
		return (0);
	}
	/* open the file for reading */
	forRead = read(forPrint, str, letters);
	/* case 3.1 if the file can not be read */
	if (forRead == -1)
	{
		free(str);
		return (0);
	}
	/* open the file for writing*/
	forWrite = write(STDOUT_FILENO, str, forRead);
	/* case 4.1 if the file can not be written */
	if (forWrite == -1)
	{
		free(str);
		return (0);
	}
	/**
	 * Cases where it works
	 * 2.2 can be opened and read
	 * 3.2 can be read
	 * 4.2 can be written
	 * close the file, free the allocated memory
	 * return the number of letters that should be read and printed
	 */
	close(forPrint);
	free(str);
	return (forWrite);
}
