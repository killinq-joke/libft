#include "../libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *trimmed;
	unsigned int end;

	if (!(trimmed = malloc(ft_strlen(s1))))
		return (NULL);
	end = 0;
	trimmed = s1;
	while (!end)
	{
		i = 0;
		end = 1;
		while (set[i])
		{
			if (trimmed[0] == set[i])
			{
				trimmed = &s1[1];
				end = 0;
			}
			i++;
		}
		i = 0;
		while (set[i])
		{
			if (trimmed[ft_strlen(trimmed)] == set[i])
			{
				trimmed[ft_strlen(trimmed)] = '/0';
				end = 0;
			}
			i++;
		}
	}
}