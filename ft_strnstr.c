#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;

	i = 0;
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (needle[j] && haystack[i + j] == needle[j] && j < len)
			{
				j++;
			}
			if (j == len)
				return (&haystack[i + j]);
		}
		i++;
	}
	return (NULL);
}
