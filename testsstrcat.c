#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
	(void)ac;
	char *bleh;
/*	bleh = (char *)malloc((strlen(av[1]) + strlen(av[2]) +1) * sizeof(char));
	bleh = ft_strcat(av[1], av[2]);
	printf("%s\n", bleh);*/
	bleh = strcat(av[1], av[2]);
	printf("%s\n", bleh);
	return (0);
}
