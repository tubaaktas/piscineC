int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((0 <= str[i]) && (str[i] <= 31))
			return (0);
		i++;
	}
	return (1);
}
