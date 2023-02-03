#include<unistd.h>

void	ft_putnbr_base_rec(int nbr, char *base, unsigned int size)
{
	unsigned int	i;
	char			a;

	if (nbr < 0)
	{
		write(1, "-", 1);
		i = nbr * (-1);
	}
	else
		i = nbr;
	if (i >= size)
		ft_putnbr_base_rec(i / size, base, size);
	a = base[i % size];
	write(1, &a, 1);
}

int	ft_ver_bas(char *base)
{
	int	i;
	
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-'
			|| base[i] == base[i + 1])
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	if (ft_ver_bas(base) == 1)
	{
		while (base[i] != '\0')
			i++;
		ft_putnbr_base_rec(nbr, base, i);
	}
}
