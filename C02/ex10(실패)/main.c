#include<stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char a[] = "hello";
	char b[] = "goods";
	char c[] = "saysomething";
	char d[] = "goods";

	printf("%d\n",ft_strlcpy(b, a, 3));
	printf("%d\n",ft_strlcpy(d, c, 9));
}
