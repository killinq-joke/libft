#include "libft.h"

char *ft_strdup(const char *s1)
{
	char *duplicate;

	if (!(duplicate = malloc(sizeof(char) * ft_strlen(s1))))
	{
		return (NULL);
	}
	return (duplicate);
}
