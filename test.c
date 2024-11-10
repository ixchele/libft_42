#include "libft.h"
#include <stdio.h>
#include <string.h>

int main ()
{
	char **str = ft_split("alskdn,ahd,khfs,asdh", ',');
	int i = 0;
	while (str[i])
		printf("%s\n", str[i++]);
}
