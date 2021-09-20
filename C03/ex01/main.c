#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	char a[] = "black";
	char b[] = "black ";
	char c[] = "acde";
	char d[] = "bcde";
	char e[] = "abcefa";
	char f[] = "abcef";
	char g[] = {127, 232, 223, 213, '\0'};
	char h[] = {127, 232, 213, 213, '\0'};
	// char g = '\0';
	printf("%d\n",strncmp(a,b,10));
	printf("%d\n",strncmp(a,b,6));
	printf("%d\n",strncmp(a,b,5));
	printf("%d\n",strncmp(a,b,4));
	printf("%d\n",strncmp(a,b,0));
	printf("%d\n",strncmp(c,d,0));
	printf("%d\n",strncmp(c,d,2));
	printf("%d\n",strncmp(e,f,10));
	// printf("%d\n",strncmp(e,f));
	printf("%d\n",strncmp(g,h,2));
	printf("%d\n",strncmp(g,h,3));

	printf("\n%d\n",ft_strncmp(a,b,10));
	printf("%d\n",ft_strncmp(a,b,6));
	printf("%d\n",ft_strncmp(a,b,5));
	printf("%d\n",ft_strncmp(a,b,4));
	printf("%d\n",ft_strncmp(a,b,0));
	printf("%d\n",ft_strncmp(c,d,0));
	printf("%d\n",ft_strncmp(c,d,2));
	printf("%d\n",ft_strncmp(e,f,10));
	// printf("%d\n",ft_strncmp(e,f));
	printf("%d\n",ft_strncmp(g,h,2));
	printf("%d\n",ft_strncmp(g,h,3));
}


// -32
// -32
// 0
// 0
// 0
// 0
// -1
// 97
// 0
// 10

// unsigned char을 안써도 잘 되는것같은데 혹시모르니 unsigned char로 바꿈 