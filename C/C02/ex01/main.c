#include<stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int	main(void)
{
	char	examp[50];

	ft_strncpy(examp, "bu bir strncpy ornegidir", 15);
	printf("Kopyalanan kısım: %s", examp);
	return (0);
}
