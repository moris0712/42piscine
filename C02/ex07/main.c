#include <stdio.h>

char	*ft_strupcase(char *str);

int main ()
{
	char a[] = "ABdsCD";
	char b[] = "";
	char c[] = " ";
	char d[] = "asvsd";
	char e[] = "!@#sd%@";

	printf("a: %s\n", ft_strupcase(a));
	printf("b: %s\n", ft_strupcase(b));
	printf("c: %s\n", ft_strupcase(c));
	printf("d: %s\n", ft_strupcase(d));
	printf("e: %s\n", ft_strupcase(e));

}
