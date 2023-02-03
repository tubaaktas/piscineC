#include <stdio.h>

int     ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int i;
	int *tab;
	int size;

	size = ft_ultimate_range(&tab, 1, 4);
	if (tab != NULL)
	{
		i = -1;
		while (++i < size)
		{
			printf("%d\n", tab[i]);
		}
	}
	return (0);
}
