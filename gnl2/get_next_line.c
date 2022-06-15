/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-souz <tde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 19:18:02 by tde-souz          #+#    #+#             */
/*   Updated: 2022/06/15 00:25:21 by tde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*next_line;
	ssize_t		bytes_read;
	size_t		found_string;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	next_line = NULL;
	found_string = 0;
	while (search_string(next_line) == 0)
	{
		if (*buffer == 0)
		{
			bytes_read = read(fd, buffer, BUFFER_SIZE);
			buffer[BUFFER_SIZE] = 0;
		}
		found_string = search_string(buffer);
		if (*buffer == 0 && bytes_read <= 0)
			return (next_line);
		if (next_line == 0)
			next_line = ft_strdup(buffer);
		else
			next_line = ft_append(next_line, buffer, found_string);
		offset_buffer(buffer);
	}
	return (next_line);
}
