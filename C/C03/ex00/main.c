#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	left_str[] = "Hello World!";
	char	right_str[] = "Hllo World!";
	int		result;

	result = ft_strcmp(left_str, right_str);
	if (result == 0)
		printf ("stringler aynı!");
	else
		printf ("stringler aynı değil!");
	printf ("\nDondurulen deger : %d", result);
	return (0);
}
