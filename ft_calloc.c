#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	size_t space;
	void *ptr;

	space = count * size;
	if (!(ptr = malloc(space)))
	{
		return (NULL);
	}
	ft_bzero(ptr, space);
	return (ptr);
}
