#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *tmpdest;
	char *tmpsrc;
	char *tmp;

	tmpdest = (char *)dest;
	tmpsrc = (char *)src;
	tmp = (char *)malloc(ft_strlen(tmpsrc) * sizeof(char));

	ft_memcpy(tmp, tmpsrc, n);
	ft_memcpy(dest, tmp, n);
	dest = (void *)tmpdest;
	return (dest);
}
