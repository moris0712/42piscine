#include<stdio.h>

char *ft_strcapitalize(char *str);

int main()
{
	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char b[] = "ASSSD assdSDA $#";
	
	printf("%s\n",ft_strcapitalize(a));
	printf("%s\n",ft_strcapitalize(b));

}
