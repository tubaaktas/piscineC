#include<stdio.h>

char	*ft_strdup(char *str);

int	main(void)
{
	char	*arr = "bu bir deeneme";

	printf("%s\n", ft_strdup(arr));
	return (0);
}
