char	*ft_strstr(char *str, char *find)
{
	int	i;

	if (find[0] == '\0')
	{
		return (str);
	}
	while (*str)
	{
		i = 0;
		while (str[i] == find[i] && str[i])
		{
			if (find[i + 1] == '\0')
			{
				return (str);
			}
			i++;
		}
		str++;
	}
	return (0);
}
