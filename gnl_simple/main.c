#include <stdio.h>
#include <fnctl.h>
#include <unistd.h>
#include "get_next_line.h"

int	main(void)
{
	int		fildes;
	char	str[BUFFER_SIZE];

	fildes = open("file.txt", 2);
    str = get_next_line(fildes);
	printf(" - %s\n", str);
	close(fildes);
	return (0);
}
