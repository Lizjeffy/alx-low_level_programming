#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: text file to be read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_d, n, k;
	char *buff;

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	k = read(file_d, buff, letters);
	n = write(STDOUT_FILENO, buff, k);

	free(buff);
	close(file_d);
	return (n);
}
