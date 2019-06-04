#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	int i;
	unsigned char *plc;

	i = 0;
	plc = (unsigned char *)s;
	while(n > 0)
	{
		if (plc[i] == (unsigned char)c)
		{
			return (&plc[i]);
		}
		else
		{
			i++;
			n--;
		}
	}
	return (NULL);
}
