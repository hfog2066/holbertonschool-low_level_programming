#include "holberton.h"

/**
 *append_text_to_file - appends text at the end of a file.
 *@filename: filename.
 *@text_content: add content.
 *Return: 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdata;
	int nletters;
	int readwrite;

	if (!filename)
		return (-1);

	fdata = open(filename, O_WRONLY | O_APPEND);

	if (fdata == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		readwrite = write(fdata, text_content, nletters);

		if (readwrite == -1)
			return (-1);
	}

	close(fdata);

	return (1);
}
