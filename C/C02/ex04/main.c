#include<stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	int		a;
	int		b;
	char	*examp;
	char	*examp1;

	examp = "bubirdeneme";
	examp1 = "BU23BIRDENEME";
	a = ft_str_is_lowercase(examp);
	b = ft_str_is_lowercase(examp1);
	printf ("%d, %d", a, b);
	return (0);
}
