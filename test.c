#include "libft.h"
#include <stdio.h>
#include <string.h>

int main ()
{
	char s[] = "zakaria";
	char d1[10];
	char d2[10];

	char *ptr1 = memmove(&s[2], s, 7);
	char *ptr2 = ft_memmove(&s[2], s, 7);
	printf("%s\n", ptr1);
	printf("%s\n", ptr2);
}
