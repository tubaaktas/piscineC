#include<stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	examp[] = "Bu BIR deNemedIR";

	printf("%s", ft_strlowcase(examp));
	return (0);
}
