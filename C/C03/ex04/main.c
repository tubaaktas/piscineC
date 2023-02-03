#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	left_str[] = "Bu string bir denemedir.";
	char	arr[] = "bir";
	char	*p = ft_strstr(left_str, arr);

	printf("dondurulen deger: %s", p);
	return (0);
}
