#include <string.h>
#include <stdio.h>

// int	ft_strcmp(char *s1, char *s2);
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*(s1 + i) == *(s2 + i) && (*(s1 + i) != '\0' || *(s2 + i) != '\0'))
		i++;
	if (*(s1 + i) > *(s2 + i) || *(s2 + i) > *(s1 + i))
		return (*(s1 + i) - *(s2 + i));
	else
		return (0);

}
int main(){

	char a[] = "black";
	char b[] = "black ";
	char c[] = "bcde";
	char d[] = "bcdah";
	char e[] = "abcef";
	char f[] = "abcef";
	// char g = '\0';
	printf("%d\n",strcmp(a,b));
	printf("%d\n",strcmp(c,d));
	printf("%d\n",strcmp(e,f));

	printf("\n%d\n",ft_strcmp(a,b));
	printf("%d\n",ft_strcmp(c,d));
	printf("%d\n",ft_strcmp(e,f));
}
