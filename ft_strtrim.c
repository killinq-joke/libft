/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztouzri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 15:07:57 by ztouzri           #+#    #+#             */
/*   Updated: 2021/01/21 15:08:03 by ztouzri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	end;
	size_t	i;

	if (!(trimmed = malloc(ft_strlen(s1))))
		return (NULL);
	end = 0;
	trimmed = (char*)s1;
	while (!end)
	{
		i = 0;
		end = 1;
		while (set[i])
		{
			if (trimmed[0] == set[i])
			{
				trimmed = (char*)&s1[1];
				end = 0;
			}
			i++;
		}
		i = 0;
		while (set[i])
		{
			if (trimmed[ft_strlen(trimmed)] == set[i])
			{
				trimmed[ft_strlen(trimmed)] = '\0';
				end = 0;
			}
			i++;
		}
	}
	return (trimmed);
}
