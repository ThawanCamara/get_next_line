#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"


int	main(void)
{
	char	 *str;
	int		fd;

	fd = open("idea.txt", O_RDONLY);
	read(fd, str, 10);
	printf("%s\n", str);
	while 
	close(fd);

	return (0);
}
