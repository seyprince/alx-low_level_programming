#include "main.h"
/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read from the file
 *
 * Return: the number of letters actually read and printed to standard output,
 * or 0 if the file can not be opened or read, or if write fails to write the
 * expected number of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
	{
		return (0);
	}
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}
	bytes_read = fread(buffer, sizeof(char), letters, fp);
	if (bytes_read <= 0)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	bytes_written = fwrite(buffer, sizeof(char), bytes_read, stdout);
	if (bytes_written != bytes_read)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	fclose(fp);
	free(buffer);
	return (bytes_read);
}

