#include<stdio.h>

int	ft_strlen(char *strlen);

int	main(void)
{
	int		a;
	char	*str;

	str = "deneme";
	a = ft_strlen(str);
	printf ("%d", a);
	return (0);
}
