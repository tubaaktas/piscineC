#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
	char left_str[] = "Hello World!";
	char right_str[] = "Hello Dünya ";
	int result = ft_strncmp(left_str, right_str, 5);
	
	if (result == 0)
		printf("Stringler esit!");
	else
		printf("Stringler esit degil!");
		printf("\nDondurulen deger strcmp(): %d" , result);
	return (0);
}
