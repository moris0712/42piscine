#include<stdio.h>

int	ft_str_is_numeric(char *str);

int main ()
{
	char *a = "1637346";
	char *b = "1b33 ";

	char c[] =  {'f','s','2','3','\0'};
	char d[] =  {'1','2','3','4','\0'};

	printf("a: %d\n", ft_str_is_numeric(a));
	printf("b: %d\n", ft_str_is_numeric(b));
	printf("c: %d\n", ft_str_is_numeric(c));
	printf("d: %d\n", ft_str_is_numeric(d));

}
