#include<stdio.h>
#include<string.h>

char	*ft_strstr(char *str, char *to_find);

int main ()
{
	char str1[] = "ebede abza abcqw";
	char str2[] = "abc";

	printf("%s\n", strstr(str1,str2));

	char str5[] = "abc";
	char str6[] = "ebede abza abcqw";
	printf("%s\n", strstr(str5,str6));

	char str3[] = "ebede abza abcqw";
	char str4[] = "abc";

	printf("%s\n", ft_strstr(str3,str4));

	char str7[] = "abc";
	char str8[] = "ebede abza abcqw";
	printf("%s\n", strstr(str7,str8));



	char str9[] = "ebede abza abcqw";
	char str10[] = "";
	printf("%s\n", strstr(str9,str10));

	char str11[] = "ebede abza abcqw";
	char str12[] = "";

	printf("%s\n", ft_strstr(str11,str12));
}