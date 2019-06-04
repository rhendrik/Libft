#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int *src1;
	int *dest1;
	int i;

	src1 = (void *)src;
	dest1 = (void *)dest;
	i = 0;
	while (src1[i] != c || n > 0)
	{
		dest1[i] = src1[i];
		i++;
		n--;
	}
	return (dest);
}
