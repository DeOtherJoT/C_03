int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while (s1[c] || s2[c])
	{
		if (s1[c] != s2[c])
		{
			return (s1[c] - s2[c]);
		}
		c++;
	}
	return (0);
}
