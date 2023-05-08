#include "main.h"

char *create_buffer(char *f);
void close_file(int file_d);

/**
 * create_buffer - allocates 1024 bytes for a buffer
 * @f: name of the file buffer is storing chars to
 * Return: pointer to the newly-allocated buffer
 */

char *create_buffer(char *f)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", f);
		exit(99);
	}
	return (buff);
}

/**
 *close_file - closes file
 *@file_d: file descriptor
 */
void close_file(int file_d)
{
	int k;

	k = close(file_d);
	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close file_d %d\n", file_d);
		exit(100);
	}
}

/**
 * main - copies the contents of a file to another file
 * @argc: number of arguements supplied to the program
 * @argv: array of pointers to the arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fm, t, r, w;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	fm = open(argv[1], O_RDONLY);
	r = read(fm, buff, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fm == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		w = write(t, buff, r);
		if (t == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		r = read(fm, buff, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buff);
	close_file(fm);
	close_file(t);

	return (0);
}
