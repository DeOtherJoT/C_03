char	*ft_strcat(char *dest, char *src)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (dest[c])
	{
		c++;
	}
	while (src[i])
	{
		dest[c] = src[i];
		i++;
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
