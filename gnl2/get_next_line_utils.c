/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-souz <tde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 19:18:08 by tde-souz          #+#    #+#             */
/*   Updated: 2022/06/15 00:20:18 by tde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	len_s = ft_strlen(src);
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

char	*offset_buffer(char *s)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (*(s + len) && *(s + len) != '\n')
		len++;
	if (*(s + len) == '\n')
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
