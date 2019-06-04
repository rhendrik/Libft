#include "./libft.h"
#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
	char *bleh;

	(void)ac;
	bleh = ft_strstr(av[1], av[2]);
	printf("%s\n", bleh);
	bleh = strstr(av[1], av[2]);
	printf("%s\n", (char *)bleh);
	return (0);
}
