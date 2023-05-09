#include "main.h"

/**
 * read_textfile - reads text from file
 * @filename: file name
 * @letters: bytes to read
 *
 * Return: number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nw;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nw = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nw);
}
