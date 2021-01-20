#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		dst[ft_strlen(dst) + i] = src[i];
		i++;
	}
	return (ft_strlen(dst) + );
}
