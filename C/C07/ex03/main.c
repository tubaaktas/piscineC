#include<stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int		main(void)
{
	char	*strs1[] = {"ROLL ME UP", " JOIN MEEEE", " NOW GET A LIGHTER!"};

	printf("%s\n", ft_strjoin(3, strs1, ","));
	return (0);
}
