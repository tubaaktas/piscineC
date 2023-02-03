#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	*arr = ft_range(2, 5);
	for (int i = 0; i < 3; i++)
		printf("%d\n", arr[i]);
	return (0);
}
