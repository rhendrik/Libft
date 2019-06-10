#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	int *src1;
	int *dest1;
	int i;

	src1 = (void *)src;
	dest1 = (void *)dest;
	i = 0;
	while (n > 0)
	{
		dest1[i] = src1[i];
		i++;
		n--;
	}
	return ((void *)dest);
}
