#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"


int	main(void)
{
	//static char s[10] = "12\n\t567890";

	//offset_buffer(s);
	//printf("|%s|\n", s);
	char		*str;
	int			fd;
	
	fd = open("texto.txt", O_RDONLY);
	str = get_next_line(fd);
	printf("%s", str);
	free(str);
	str = get_next_line(fd);
	printf("%s", str);
	free(str);
	str = get_next_line(fd);
	printf("%s", str);
	free(str);
	str = get_next_line(fd);
	printf("%s", str);
	free(str);
	str = get_next_line(fd);
	printf("%s", str);
	free(str);
	str = get_next_line(fd);
	printf("%s", str);
	free(str);

	close(fd);

//	char	*s = "oops\ntem quebras de li\nnha por aqui";
//	char	*dest;
//
//	dest = build_string(s);
//
//	printf("%s\n", dest);
//
//	free(dest);

	return (0);
}
