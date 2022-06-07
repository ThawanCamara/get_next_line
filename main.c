/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-souz <tde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:36:30 by tde-souz          #+#    #+#             */
/*   Updated: 2022/06/06 21:18:27 by tde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

//#define BUFFER_SIZE=n

int testfd()
{
	static t_fd_node	*node;
	if (node == NULL)
		node = create_node(3);
	node->index += 1;
	return (node->index);
}

int main()
{
	printf("head index is %d\n", testfd());
	printf("head index is %d\n", testfd());
	printf("head index is %d\n", testfd());
	printf("head index is %d\n", testfd());

	return (0);
}
//{
//	int		fildes;
//	char	*path;
//	char	*line;
//	
//	path = "sampletext.txt";
//	fildes = open(path, 2);
//	line = get_next_line(fildes);
//	while (line)
//	{
//		free(line);
//		line = get_next_line(fildes);
//		printf("%s\n|", line);
//	}
//	close(fildes);
//
//	t_fildes	*head;
//
//
//	return (0);
//}
//{
//	int fd = open("sampletext.txt", 2);
//	char s[12];
//
//	read(fd, s, 10);
//	printf("%s\n", s);
//	close(fd);
//
//	fd = open("sampletext.txt", 2);
//	read(fd, s, 10);
//	printf("%s\n", s);
//	close(fd);
//	return (0);
//}
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
//	int fd = open(path[0], 2);
//	for (int i = 0; i < 3; i++)
//	{
//		*(fildes + i) = open(path[i], 2);
//		printf("%d - %s\n", *(fildes + i), path[i]);
//	}
//
//	write(3, "graça", 5);
//	printf("fd is %d\n", fd);
//	close(3);
//	printf("fd is %d\n", fd);
//
//	for (int i = 0; i < 3; i++)
//	{
//		close(*(fildes + i));
//	}
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d - %s\n", *(fildes + i), path[i]);
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
