int	ft_strcmp(char *s1, char *s2)
{
	int	j;

	j = 0;
	while (s1[j] != '\0' && s2[j] != '\0' && s1[j] == s2[j])
	{
		j++;
	}
	return (s1[j] - s2[j]);
}
