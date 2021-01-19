void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *tmp;

	i = 0;
	while (i < n)
	{
		tmp = (unsigned char *)src;
		*tmp = src + i;
		i++;
	}
	i = 0;
	while (i < n)
	{
		*(dest + i) = *(tmp + i);
		i++;
	}
	return (dest);
}