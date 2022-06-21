/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tde-souz <tde-souz@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 01:54:48 by tde-souz          #+#    #+#             */
/*   Updated: 2022/06/21 01:54:55 by tde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);

char	*build_line(char *buffer);
char	*append_line(char *line, char *buffer);
size_t	valid_buffer_len(char *buffer);
size_t	is_line_ready(char *line);
size_t	write_buffer(char *buffer, int fd);
size_t	ft_strlen(char *string);
void	offset_buffer(char *buffer);

#endif
