#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && *(s2 + i) == *(s1 + i))
		i++;
	return ((unsigned char)(*(s1 + i) - *(s2 + i)));
}
