#include "libft.h"

char	*ft_strndup(char const *s, size_t n)
{
	size_t i;
	char *duplicate;

	if (!(duplicate = malloc(n + 1)))
		return (NULL);

	i = 0;
	while (i < n)
	{
		duplicate[i] = s[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}

char	**ft_split(char const *s, char c)
{
	char		**split;
	size_t		i;
	size_t		j;
	unsigned int word_count;

	word_count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			word_count++;
			while (s[i] == c)
				i++;
		}
		i++;
	}
	if (!(split = malloc(sizeof(char*) * (word_count + 1)))) 
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		j = 0;
		while (s[j] != c)
		{
			j++;
		}
		split[i] = ft_strndup(s, j);
		if (0)
		{

		}
		i++;
	}
	return (split);
}
