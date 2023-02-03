#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	char	base[] = "0123456789ABCDEF";
	int		c;

	c = -123;
	ft_putnbr_base(c, base);
	printf("\n");
	return (0);
}
