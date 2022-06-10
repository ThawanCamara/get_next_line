#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE];
	char		*next_line;
	size_t		bytes_read;
	size_t		found_string;

	if (fd == -1)
		return (0);
	next_line = NULL;
	found_string = 0;
//	printf("inicio\n");
	while (search_string(next_line) == 0)
	{
		if (*buffer == 0)
			bytes_read = read(fd, buffer, BUFFER_SIZE);
		found_string = search_string(buffer);
		if (*buffer == 0 && bytes_read == 0)
			return (0);
		if (next_line == 0)
			next_line = ft_strdup(buffer); // TRATAR \n FDP
		else
			next_line = ft_append(next_line, buffer, found_string);
		//tratar o buffer por favor
//		printf("NxtLn : %s|\n",next_line);
//		printf("Buffer: %s|\n",buffer);
		offset_buffer(buffer);
	}
//	printf("final\n");
	return (next_line);
}
