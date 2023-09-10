#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>

/**
 * create_file - To create a file
 * @filename: name of file to create
 * @text_content: string to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{

int fd, ok;

if (!filename)
	return (-1);

fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR);
if (fd == -1)
	return (-1);

if (text_content)
{
	ok = write(fd, text_content, strlen(text_content));
	if (ok == -1)
		return (-1);
}

close(fd);
if (fd == -1)
	return (-1);

return (1);
}
