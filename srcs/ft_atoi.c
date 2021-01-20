#include "../libft.h"

int	ft_atoi(const char *nptr)
{
	int result;
	int sign;
	size_t i;
	size_t j;

	sign = 1;
	result = 0;
	i = 0;
	j = 0;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
		j++;
	}
	while (nptr[i] && ft_isdigit(nptr[i]))
	{
		result *= 10;
		result += nptr[i] - '0';
		i++;
	}
	return (sign * result);
}