#include<stdio.h>

int ft_str_is_printable(char *str);

int main ()
{
	char a[] = {64,35,5,23,'\0'};
	char b[] = {2,4,7,4,'\0'};
	char c[] = {33,126,'\0'};
	char d[] = {50,70,'\0'};

	printf("a: %d\n", ft_str_is_printable(a));
	printf("b: %d\n", ft_str_is_printable(b));
	printf("c: %d\n", ft_str_is_printable(c));
	printf("d: %d\n", ft_str_is_printable(d));
}