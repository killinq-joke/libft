#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *join;
	size_t i;
	size_t j;

	if (!(join = malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		join[i + j] = s2[j];
		j++;
	}
	join[i + j] = '\0';
	return (join);
}
