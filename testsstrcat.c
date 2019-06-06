#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
	(void)ac;
	char *bleh;
	char *s1;
	char *s2;

	s1 = NULL;
	s2 = NULL;
	s1 = strcpy(s1, av[1]);
	s2 = strcpy(s2, av[2]);
	bleh = (char *)malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
/*	bleh = ft_strcat(av[1], av[2]);
	printf("%s\n", bleh);*/
	bleh = strcat(av[1], av[2]);
	printf("%s\n", bleh);
	return (0);
}
