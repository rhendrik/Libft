#include "libft.h"

void ft_lstdel(t_list **alist,void (*del)(void *, size_t))
{
	if((*alist)->next)
	{
		ft_lstdel(&(*alist), del);
	}
	ft_lstdelone(&(*alist), del);
}
