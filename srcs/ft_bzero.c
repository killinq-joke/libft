#include "../libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *tmp;

	i = 0;
	while (i < n)
	{
		tmp = (unsigned char*)s;
		*tmp = 0;
		s++;
		i++;
	}
	return (s);
}