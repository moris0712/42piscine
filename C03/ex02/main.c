#include <string.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main()
{
	char a[10] = "black";
	char b[10] = "acde";
	char c[6] = {37, 87, '\0'};
	char d[3] = {32, 78, '\0'};
	strcat(a,b);
	strcat(c,d);
	printf("%s\n", a);	
	for(int i=0; i<6; i++)
		printf("%d  ",c[i]);
	printf("\n");
	char e[10] = "black";
	char f[10] = "acde";
	char g[6] = {37, 87, '\0'};
	char h[3] = {32, 78, '\0'};
	printf("%s\n",ft_strcat(e,f));
	printf("암것도아님%s\n",ft_strcat(g,h));
	for(int i=0; i<6; i++)
		printf("%d  ",g[i]);
}


// strcat 쓸때 복사될 배열의 크기가 총 black + acde + '\0' 10이 넘지않으면 Illegal instruction: 4 에러가 출력된다.
// 이 strcat친구는 unsigned char 범위는 작동하지않는다
