#include "main.h"

/**
 * create_file - creates a file and writes a string to it
 * @filename: name of file to create
 * @text_content: string to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc, bytes_written, text_len = 0, mode = S_IRUSR | S_IWUSR;

	if (filename == NULL) /*check for filename*/
		return (-1);
	file_desc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode); /*open file*/
	if (file_desc == -1) /*check for file opening*/
		return (-1);

	if (text_content != NULL) /*write content to file*/
	{
		while (text_content[text_len])
			text_len++;

		bytes_written = write(file_desc, text_content, text_len); /*write to file*/
		if (bytes_written != text_len) /*check for write failure*/
			return (-1);
	}

	close(file_desc); /*close file*/
	return (1);
}

