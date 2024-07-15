#include "get_next_line.h"

static char whole_line(int fd, char *buf, char *backup)
{
	int		read_line;
	char	*char_temp;

	read_line = 1;
	while (read_line != '\0')
	{
		read_line = read(fd, buf, backup);
		if (read_line = -1)
			return (0);
		if (read_line = 0)
		break;
		buf[read_line] = '\0';
		if (backup == '\0')
			backup = ft_strdup("");
		char_temp = backup;
		backup = ft_strjoin(char_temp, buf);
		free(char_temp);
		char_temp = NULL;
	}
	return (backup);
}

static char second_line()
{
	
}

char *get_next_line(int fd)
{
	char	*string;
	char	*buf;
	char	*backup;

	if (fd < 0)
		return (0);

	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (buf == '\0')
		return (0);
	string = whole_line(fd, buf, backup);
	free(buf);
	buf = NULL;

	if (string == '\0')
		return (NULL);
	backup = second_line(string);
	return (string);
}
