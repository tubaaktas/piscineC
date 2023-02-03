#include<stdio.h>
#include<string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	examp[] = "yaz kızım";
	char	examp1[] = "bu bir denemedir";
	unsigned int	x;


	x = ft_strlcpy(examp, examp1, 5);
	printf("%s\n", examp);
	printf("%d\n", x);
	return (0);
}
