#include "main.h"
/**
 *main - function that copies the 'cp' function in shell copy file
 *@argc: expected value 3 as filename 1output 2originator 3destination
 *@argv: 2 strings, 1st originator, 2nd destination files
 *Return: 0 if OK, ERC 97-100 if KO
 */

int main(int argc, char **argv)
{
	int originator, destination, readable, writable, closable1, closable2;
	char str[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	originator = open(argv[1], O_RDONLY);
	if (originator == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (destination == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((readable = read(originator, str, 1024)) > 0)
	{
		writable = write(destination, str, readable);
		if (writable == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (readable == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	closable1 = close(originator);
	if (closable1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", originator), exit(100);
	closable2 = close(destination);
	if (closable2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination), exit(100);
	return (0);
}
