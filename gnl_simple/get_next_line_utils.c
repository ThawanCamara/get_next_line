#include "get_next_line.h"

size_t	search_string(char *s)
{
	if (s == 0)
		return (1);	
	while (*s)
	{
		if (*s == '\n')
			return (0);
		s++;
	}
	return (1);
}	

char	*build_string(char *s)
{
	size_t	len;
	char	*ret;

	len = 0;
	while (*s != '\n' && *s)
	{
		len++;
		s++;
	}
	ret = (char *)malloc(len + 1);
	if (ret == NULL)
		return (NULL);
	s -= len;
	while (len)
	{
		*(ret + len) = *(s + len);
		len--;
	}
	return (ret);
}

char	*append(char *buffer, char *reader)
{
	char	*ret;
	size_t	len_b;

	if (!buffer)
		len_b = 0;
	else
		len_b = ft_strlen(buffer);
	ret = (char *)malloc((len_b + ft_strlen(reader) + 1) * sizeof(char));
	while (--len_b)
		*ret++ = *buffer++;
	while (*reader)
		*ret++ = *reader++;
	*ret = 0;
	return (ret);
}

size_t	ft_strlen(char *s)
{
	size_t	count;

	count = 0;
	while (*s++)
		count++;
	return (count);
}
