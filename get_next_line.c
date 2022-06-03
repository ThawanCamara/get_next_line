/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-souz <tde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 08:57:57 by tde-souz          #+#    #+#             */
/*   Updated: 2022/06/03 10:14:22 by tde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	char	*next_line;
	
	next_line = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	read(fd, next_line, BUFFER_SIZE);
	return (next_line);
}

