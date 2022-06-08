#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char		*buffer;
	char			reader[BUFFER_SIZE];
	char			*temp;
//	char			*ret;

	temp = NULL;	
	while (search_string(buffer) > 0)
	{
		temp = buffer;
		read(fd, reader, BUFFER_SIZE);
		buffer = append(temp, reader);
		if (temp != 0)
			free(temp);
	} 
	return (build_string(buffer));	
}
