#include "holberton.h"

/**
 *create_file - create a file.
 *@filename: filename.
 *@text_content: content writed in file.
 *Return: 1 if success.
 */

int create_file(const char *filename, char *text_content)
{
	int fdate;
	int nletters;
	int readwrite;

	if (!filename)
		return (-1);

	fdate = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fdate == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	readwrite = write(fdate, text_content, nletters);

	if (readwrite == -1)
		return (-1);

	close(fdate);

	return (1);
}
