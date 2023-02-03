#include<unistd.h>

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0' - 1;
	while (x++ <= '7')
	{
		y = x;
		while (++y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				write(1, &x, 1);
				write(1, &y, 1);
				write(1, &z, 1);
				z++;
				if (x < '7')
					write(1, ", ", 2);
			}
		}
	}
}
