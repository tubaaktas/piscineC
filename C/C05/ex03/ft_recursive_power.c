int	ft_recursive_power(int nb, int power)
{
	int	temp;

	temp = nb;
	if (power > 1)
		return (temp * ft_recursive_power(temp, power - 1));
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (temp);
}
