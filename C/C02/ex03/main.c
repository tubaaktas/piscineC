#include<stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	int		a;
	int		b;
	char	*examp;
	char	*examp1;

	examp = "bu bir 234211 deneme";
	examp1 = "213141";
	a = ft_str_is_numeric(examp1);

	printf ("%d", a);
	return (0);
}
