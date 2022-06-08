#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(void)
{
	int		fildes;
	char	*str;

	fildes = open("file.txt", O_RDONLY);
    str = get_next_line(fildes);
//	printf(" - %s\n", str);
	free(str);
	close(fildes);
	return (0);
}
