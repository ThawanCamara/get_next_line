/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-souz <tde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:36:30 by tde-souz          #+#    #+#             */
/*   Updated: 2022/06/03 10:23:14 by tde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

//#define BUFFER_SIZE=n

int main()
{
	int		fildes;
	char	*path;
	char	*line;
	
	path = "sampletext.txt";
	fildes = open(path, 2);
	line = get_next_line(fildes);
	while (line)
	{
		free(line);
		line = get_next_line(fildes);
		printf("%s\n|", line);
	}
	close(fildes);
	return (0);
}

//{
//	int		*fildes;
//	char	*path[20];
//
//	fildes = (int *)malloc(5 * sizeof(int));
//	path[0] = "file1.txt";
//	path[1] = "file2.txt";
//	path[2] = "file3.txt";
//	path[3] = "file4.txt";
//	path[4] = "file5.txt";
//	for (int i = 0; i < 5; i++)
//	{
//		*(fildes + i) = open(path[i], 2);
//		printf("%d - %s\n", *(fildes + i), path[i]);
//	}
//
//	write(6, "ola mundo!", 10);
//
//	for (int i = 0; i < 5; i++)
//	{
//		close(*(fildes + i));
//	}
//	return (0);
//}
//{
//	int		*fildes;
//	char	*path[1];
//	char	*buffer;
//	size_t	buffer_size;
//
//	printf("%d", BUFFER_SIZE);
//	buffer_size = 15;
//	fildes = (int *)malloc(1 * sizeof(int));
//	path[0] = "sampletext.txt";
//	buffer = (char *)malloc(buffer_size * sizeof(char));
//	*fildes = open(path[0], 2);
//	read(*fildes, buffer, buffer_size);
//	printf("> %s|\n", buffer);
//	read(*fildes, buffer, buffer_size);
//	printf("> %s|\n", buffer);
//	close(*fildes);
//	return (0);
//}
