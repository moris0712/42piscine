#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int main()
{
	char a[] = "ABDSCD";
	char b[] = "";
	char c[] = " ";
	char d[] = "ABCasd";
	char e[] = "!@#%@";

	printf("a: %d\n", ft_str_is_lowercase(a));
	printf("b: %d\n", ft_str_is_lowercase(b));
	printf("c: %d\n", ft_str_is_lowercase(c));
	printf("d: %d\n", ft_str_is_lowercase(d));
	printf("e: %d\n", ft_str_is_lowercase(e));

}
