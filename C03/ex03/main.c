#include<string.h>
#include<stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	char a[15] = "black";
	char b[10] = "acde";
	char c[6] = {37, 87, '\0'};
	char d[3] = {32, 78, '\0'};
	strncat(a,b,12);
	strncat(c,d,1);
	printf("%s\n", a);	
	for(int i=0; i<15; i++)
		printf("%d ",a[i]);
	printf("\n");
	for(int i=0; i<6; i++)
		printf("%d  ",c[i]);
	printf("\n");
	char e[15] = "black";
	char f[10] = "acde";
	char g[6] = {37, 87, '\0'};
	char h[3] = {32, 78, '\0'};
	printf("%s\n",ft_strncat(e,f,12));
	for(int i=0; i<15; i++)
		printf("%d ",e[i]);
	printf("\n");
	printf("암것도아님%s\n",ft_strncat(g,h,1));
	for(int i=0; i<6; i++)
		printf("%d  ",g[i]);
}