int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (47 > str[i] || str[i] > 58)
			return (0);
		i++;
	}
	return (1);
}
