#include "../libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *sub;
	unsigned int i;

	if (!(sub = malloc(len)))
		return (NULL);
	i = 0;
	while (i < (unsigned int)len)
	{
		sub[i] = s[start + i];
		i++;
	}
	return (sub);
}