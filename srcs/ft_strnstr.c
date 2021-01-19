#include "../libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] && haystack[i + j] == needle[j])
			{
				j++;
			}
			if (j == ft_strlen(needle))
				return (&haystack[i + j]);
		}
		i++;
	}
	return (NULL);
}