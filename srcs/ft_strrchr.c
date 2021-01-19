int		ft_twoinstances(const char *s, int c)
{
	int i;
	int instances;

	i = 0;
	instances = 0;
	while (s[i])
	{
		if (s[i] == c)
			instances++;
		if (instances == 2)
			return (1);
		i++;
	}
	return (0);
}

char *ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] && ft_twoinstances(s, c))
		i++;
	return (&s[i]);
}