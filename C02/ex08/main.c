#include <stdio.h>

char	*ft_strlowcase(char *str);

int main ()
{
	char a[] = "ABdsCD";
	char b[] = "";
	char c[] = " ";
	char d[] = "SADDA";
	char e[] = "!@#sd%@";

	printf("a: %s\n", ft_strlowcase(a));
	printf("b: %s\n", ft_strlowcase(b));
	printf("c: %s\n", ft_strlowcase(c));
	printf("d: %s\n", ft_strlowcase(d));
	printf("e: %s\n", ft_strlowcase(e));

}
