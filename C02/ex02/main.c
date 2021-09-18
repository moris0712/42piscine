#include<stdio.h>

int	ft_str_is_alpha(char *str);

int main()
{
	char a[] = "abcdfe";
	char b[] = "";
	char c[] = "@&!*";
	char d[] = "ab%&*";
	char e[] = "#@$%#";

	printf("a: %d\n",ft_str_is_alpha(a));
	printf("b: %d\n",ft_str_is_alpha(b));
	printf("c: %d\n",ft_str_is_alpha(c));
	printf("d: %d\n",ft_str_is_alpha(d));
	printf("d: %d\n",ft_str_is_alpha(e));

}
