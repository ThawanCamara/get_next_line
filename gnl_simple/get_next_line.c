#include "get_next_line.h"


char	*get_next_line(int fd)
{
	static char		*buffer;
	char			reader[BUFFER_SIZE];

	
	//if (buffer == 0)
	//	buffer = (char *)malloc(BUFFER_SIZE * sizeof(char));
	//if (*buffer == 0)
	//	read(fd, reader, BUFFER_SIZE);
	//else
	//{
		while (search_string(buffer))
		{
			if (buffer != 0)
				
			read(fd, reader, BUFFER_SIZE);
			buffer = append(buffer, reader);
		}

	//}
	
		
}
