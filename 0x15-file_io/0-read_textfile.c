#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 * @filename: pointer to the text file to be read and printed.
 * @letters: the number of letters to be read and printed.
 *
 * Return: the actual number of letters it could read and print
 *      OR 0 if the file can not be opened or read,
 *           or if filename is NULL,
 *           or if write fails or does not write the expected amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fdo, fdr, fdw;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	fdo = open(filename, O_RDONLY);
	fdr = read(fdo, buff, letters);
	fdw = write(STDOUT_FILENO, buff, fdr);

	if (fdo < 0 || fdr < 0 || fdw < 0)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(fdo);

	return (fdw);
}
