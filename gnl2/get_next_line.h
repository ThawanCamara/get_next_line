#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);

size_t	ft_strlen(const char *s);
size_t	search_string(char *s);
char	*ft_append(char *dst, const char *src, size_t len);
char	*ft_strdup(const char *s1);
char	*offset_buffer(char *s);

#endif
