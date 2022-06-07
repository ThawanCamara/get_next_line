/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-souz <tde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 08:57:57 by tde-souz          #+#    #+#             */
/*   Updated: 2022/06/06 21:18:21 by tde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	char				*next_line;
	static t_fd_node	*buffer_list;

	
	node = get_node(fd,)
	next_line = (char *)malloc((BUFFER_SIZE) * sizeof(char));
	read(fd, next_line, BUFFER_SIZE);
	next_line[BUFFER_SIZE] = '\0';
	return (next_line);
}

