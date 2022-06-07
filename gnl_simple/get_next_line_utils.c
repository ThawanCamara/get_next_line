#include "get_next_line.h"

size_t	search_string(*s)
{
	while (*s)
	{
		if (*s == '\n' || *s == EOF)
			return (1);
		s++;
	}
	return (0);
}	

char	*build_string(*s)
{

}

char	*append(char *buffer, char *reader)
{
	char	*ret;
	size_t	len_b;
	size_t	len_r;

	len_b = 0;
	len_r = 0;
	while (*(buffer + len_b))
		len_b++;
	while (*(reader + len_r))
		len+r++;
	ret = (char *)malloc((len_b + len_r + 1) * sizeof(char));
	while (*buffer)
		*ret++ = *buffer++;
	while (*reader)
		*ret++ = *reader++;
	*ret = 0;
	return (ret);
}


