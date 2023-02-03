int	ft_iterative_factorial(int nb)
{
	int	sonuc;
	int	i;

	sonuc = 1;
	i = 1;
	if (nb < 0)
	{
		sonuc = 0;
	}
	else
	{
		while (i <= nb)
		{
			sonuc = sonuc * i;
			i++;
		}
	}
	return (sonuc);
}
