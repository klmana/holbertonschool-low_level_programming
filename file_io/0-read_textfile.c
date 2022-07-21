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
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
		return (0);
	forPrint = open(filename, O_RDWR);

	if (forPrint == -1)
	{
		free(str);
		return (0);
	}
	forRead = read(forPrint, str, letters);
	if (forRead == -1)
	{
		free(str);
		return (0);
	}
	forWrite = write(STDOUT_FILENO, str, forRead);
	if (forWrite == -1)
	{
		free(str);
		return (0);
	}
	close(forPrint);
	free(str);
	return (forWrite);
}
