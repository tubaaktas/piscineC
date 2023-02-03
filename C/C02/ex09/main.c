#include<stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	examp[] = "SAlut, coMMent tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(examp));
	return (0);
}
