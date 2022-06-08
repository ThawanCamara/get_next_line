#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);

char	*build_string(char *s);
char	*append(char *buffer, char *reader);
size_t	search_string(char *s);
size_t	ft_strlen(char *s);

#endif
