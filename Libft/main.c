#include <string.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
	char	test[] = "Hello world";
	char	*str = strdup(test);

	printf("%s\n", ft_memset(str, 'a', 2));
	printf("%s\n", memset(str, 'a', 2));
}