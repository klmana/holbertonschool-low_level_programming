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

/* case if the number of argument os niot correct */
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
/**
 *define originator as opening in read only
 *the file that the first argument in the command line
*/
	originator = open(argv[1], O_RDONLY);
/* case if the file from doesn’t exist then ERC 98 */
	if (originator == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
/**
 *define destination  as  creating the file in write only mode with chmode 0664
 *permissions the file that the second argument in the command line and truncate
 *the file to make sure it is empty if already created
 */
	destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
/* case if the destination file cannot be created  then ERC 99 */
	if (destination == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
/* while loop to read in the originator file and write tothe destination file */
	while ((readable = read(originator, str, 1024)) > 0)
	{
/* write to the destination file if originator file is  readable */
		writable = write(destination, str, readable);
/* case if the destination file failed be created  then ERC 99 */
		if (writable == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
/* case if the file from cannot be read then ERC 98 */
	if (readable == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
/* close the originator file after creation */
	closable1 = close(originator);
/* case if the originator file from cannot be closed then ERC 100 */
	if (closable1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", originator), exit(100);
/* close the destination file after creation */
	closable2 = close(destination);
/* case if the destination file from cannot be closed then ERC 100 */
	if (closable2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination), exit(100);
	return (0);
}
