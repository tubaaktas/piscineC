#include<stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	int		a;
	int		b;
	char	*examp;
	char	*examp1;

	examp = "bubirdeneme";
	examp1 = "bu bir deneme";
	a = ft_str_is_alpha(examp);
	b = ft_str_is_alpha(examp1);
	printf("%d, %d", a, b);
	return (0);
}
