#include "get_next_line.h"


char	*get_next_line(int fd)
{
	static char		*buffer;

	if (buffer == 0)
	{
		buffer = (char *)malloc(BUFFER_SIZE * sizeof(char));
		read(fd, buffer, BUFFER_SIZE);
	}

	//verifica se o buffer tem algo
	//
	
}
