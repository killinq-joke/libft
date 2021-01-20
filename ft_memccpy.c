#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;


	i = 0;
	while (i < n)
	{
		if (src[i] == c)
			return (dest);
		*(dest + i) = *(src + i);
		i++;
	}
	return (NULL);
}
