#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	left_str[100] = "Hello World!";

	ft_strncat(left_str, " Hello from the other side", 0);
	printf ("strncat() tarafından döndürülen değer: %s", left_str);
	return (0);
}
