int	ft_strncmp(char *str1, char *str2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if ((str1[i] == str2[i]) && str1[i] == '\0')
	{
		return (0);
	}
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}
