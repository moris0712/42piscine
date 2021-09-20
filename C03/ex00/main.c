#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int main(){

	char a[] = "black";
	char b[] = "black ";
	char c[] = "bcde";
	char d[] = "bcdah";
	char e[] = "abcef";
	char f[] = "abcef";
	char g[] = "abcdz";
	char h[] = "abcde";
	// char g = '\0';
	printf("%d\n",strcmp(a,b));
	printf("%d\n",strcmp(c,d));
	printf("%d\n",strcmp(e,f));
	printf("%d\n",strcmp(g,h));

	printf("\n%d\n",ft_strcmp(a,b));
	printf("%d\n",ft_strcmp(c,d));
	printf("%d\n",ft_strcmp(e,f));
	printf("%d\n",ft_strcmp(g,h));
}


// -32
// 4
// 0
// 21

// 문자열 길이와 상관없이 두 문자열중 긴 쪽을 기준으로 마지막 문자를 비교해서 int값 내보냄
// '\0'는 0 그래서 a에서 b를 뻇을때 -32가 나올수있다.
