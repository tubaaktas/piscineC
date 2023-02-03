#include<stdlib.h>

char	*ft_strdup(char *src)
{
	char	*array;
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (src[i] != '\0')
		i++;
	array = malloc((i + 1) * sizeof(char));
	if (array == NULL)
		return (0);
	while (src[j] != '\0')
	{
		array[j] = src[j];
		j++;
	}
	array[j] = '\0';
	return (array);
}
