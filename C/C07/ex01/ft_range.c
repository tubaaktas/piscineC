#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	j;

	if (min >= max)
	{
		return (0);
	}
	j = 0;
	i = max - min;
	arr = malloc ((i + 1) * sizeof (int));
	if (arr == NULL)
		return (0);
	while (j < i)
	{
		arr[j] = min + j;
		j++;
	}
	arr[j] = '\0';
	return (arr);
}
