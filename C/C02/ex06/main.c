#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	int		a;
	int		b;
	char	*examp;
	char	*examp1;

	examp = "!+6bu bir deneme6+!";
	examp1 = "\n";
	a = ft_str_is_printable(examp);
	b = ft_str_is_printable(examp1);
	printf("%d, %d", a, b);
	return (0);
}
