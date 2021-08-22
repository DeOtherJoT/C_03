char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	unsigned int	i;

	c = 0;
	i = 0;
	if (nb > 0)
	{
		while (dest[c])
		{
			c++;
		}
		while (src[i] && i < nb)
		{
			dest[c] = src[i];
			c++;
			i++;
		}
		dest[c] = '\0';
	}
	return (dest);
}
