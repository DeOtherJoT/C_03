unsigned int	scroll(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index_dest;
	unsigned int	index_src;
	unsigned int	initial_dest_size;

	initial_dest_size = scroll(dest);
	if (size >= initial_dest_size)
	{
		index_dest = initial_dest_size;
		index_src = 0;
		while (src[index_src] && (index_dest < (size - 1)))
		{
			dest[index_dest] = src[index_src];
			index_src++;
			index_dest++;
		}
		dest[index_dest] = '\0';
		return (initial_dest_size + scroll(src));
	}
	return (scroll(dest) + size);
}

unsigned int	scroll(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
