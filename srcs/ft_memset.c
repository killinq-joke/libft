#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	size_t i;
	unsigned char *tmp;

	i = 0;
	while (i < n)
	{
		tmp = (unsigned char *)s;
		*tmp = value;
		s++;
		i++;
	}
	return (s);
}