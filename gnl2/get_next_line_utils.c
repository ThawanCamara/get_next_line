#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (*s++)
		count++;
	return (count);
}

size_t	search_string(char *s)
{
	size_t	count;

	count = 0;
	if (s == 0)
		return (0);
	while (*s)
	{
		if (*s++ == '\n')
			return (count + 1);
		count++;
	}
	return (0);
}

char	*ft_append(char *dst, const char *src, size_t len)
{
	char	*ret;
	size_t	len_s;
	size_t	len_d;
	char	*ptr;

	if (len == 0)
		len = ft_strlen(src);
	len_s = ft_strlen(src); //malloc excessivo
	len_d = ft_strlen(dst);
	ret = (char *)malloc((len_d + len_s + 1) * sizeof(char));
	if (ret == 0)
		return (0);
	ptr = ret;
	while (*dst)
		*ret++ = *dst++;
	while (len--)
		*ret++ = *src++;
	*ret = 0;
	free(dst - len_d);
	return (ptr);
}

//TRATAR O \n AQUI
char	*ft_strdup(const char *s1)
{
	size_t	len;
	size_t	i;
	char	*ret;

	len = ft_strlen(s1);
	ret = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	if (ret == 0)
		return (0);
	while (*(s1 + i) && *(s1 + i - 1) != '\n')
	{
		*(ret + i) = *(s1 + i);
		i++;
	}
	*(ret + i) = 0;
	return (ret);
}

#include <stdio.h>
char	*offset_buffer(char *s)
{
	size_t	i;
	size_t	len;
	
	i = 0;
	len = 0;
	while (*(s + len) && *(s + len) != '\n')
		len++;
	if (*(s	+ len) == '\n')
		len++;
	while (*(s + i + len))
	{
		*(s + i) = *(s + i + len);
		i++;
	}
	while (*(s + i))
		*(s + i++) = 0;
	return (s);
}
