#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	int i;
	int *start;

	i = 0;
	start = s;
	while (n > 0)
	{
		start[i++] = c;
		n--;
	}
	return (s);
}
