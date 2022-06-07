#include "get_next_line.h"

t_fd_node	*create_node(int fd)
{
	t_fd_node	*new_fd;

	new_fd = (t_fd_node*)malloc(sizeof(t_fd_node));
	new_fd->index = fd;
	new_fd->line = NULL;
	new_fd-> next = NULL;

	return (new_fd);
}

//void	add_node(t_fd_node **current, t_fd_node *new)
//{
//	if (*current == NULL)
//		*current = new;
//	else
//	{
//		while (*current->next != NULL)
//			*current = *current->next;
//		*current->next = new;
//	}
//}

t_fd_node	*get_node(int fd, t_fd_node **current)
{
	while (*current->next != NULL)
	{
		if (*current->index == fd)
			return (*current);
		*current = *current->next;
	}
	current->next = create_node(fd);
	return (*current->next);
}
