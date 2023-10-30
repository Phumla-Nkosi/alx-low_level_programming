#include "main.h"

/**
 * create_file - A file must be created.
 * @filename: The name of the file must be created to the pointer.
 * @text_content: Write the file and points it to the string.
 *
 * Return: Failed function - -1.
 *         Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
int fd, w, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(fd, text_content, len);
if (fd == -1 || w == -1)
return (-1);
close(fd);
return (1);
}
