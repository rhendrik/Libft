#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	char *string;
	int i;

	string = s;
	i = 0;
	while (n > 0)
	{
		string[i++] = '\0';
		n--;
	}
}
