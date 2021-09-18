#include<stdio.h>

int ft_str_is_uppercase(char *str);

int main ()
{
	char a[] = "ABDSCD";
	char b[] = "";
	char c[] = " ";
	char d[] = "ABCasd";
	char e[] = "!@#%@";

	printf("a: %d\n", ft_str_is_uppercase(a));
	printf("b: %d\n", ft_str_is_uppercase(b));
	printf("c: %d\n", ft_str_is_uppercase(c));
	printf("d: %d\n", ft_str_is_uppercase(d));
	printf("e: %d\n", ft_str_is_uppercase(e));

}
