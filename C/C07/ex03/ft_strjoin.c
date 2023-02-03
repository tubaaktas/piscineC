#include<stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		a;
	int		i;
	int		j;
	char	*arr;

	a = 0;
	i = 0;
	arr = malloc(sizeof(*strs));
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			arr[a++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
			arr[a++] = sep[j++];
		i++;
	}
	arr[a] = '\0';
	return (arr);
}
