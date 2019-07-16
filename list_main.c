#include "libft.h"

int main(int ac, char **av)
{
	(void) ac;

	t_list *next;
	next = ft_lstnew(av[1], sizeof(av[1]));
	ft_putstr(next->content);
}
