#include<stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	int		a;
	int		b;
	char	*examp;
	char	*examp1;

	examp = "bubirdenemedir";
	examp1 = "BUBIRDENEMEDIR";
	a = ft_str_is_uppercase(examp);
	b = ft_str_is_uppercase(examp1);
	printf ("%d, %d", a, b);
	return (0);
}
