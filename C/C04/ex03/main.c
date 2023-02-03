#include<stdio.h>

int ft_atoi(char *str);

int	main()
{
	char	str[] = " +---+123ae23";
	int		x;

	x = ft_atoi(str);
	printf("%d", x);
	return (0);
}
