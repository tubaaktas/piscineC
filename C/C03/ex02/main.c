#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main() 
{
	char leftStr[100] = "Hello World!";

	ft_strcat(leftStr, " Hello from the other side");
	printf ("\nValue returned by strcmp() is: %s" , leftStr);
	return (0);
}
