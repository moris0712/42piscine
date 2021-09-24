#include<stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{



	char dest2[30] = "123";
	char *src2 = "456789";
	printf("%lu\n", strlcat(dest2,src2,7));
	printf("%s\n",dest2);

	char dest3[30] = "123";
	char *src3 = "456789";
	printf("%lu\n", strlcat(dest3,src3,3));
	printf("%s\n",dest3);

	char src5[] = "saysomthing";
	char dest5[10] = "goods";
	printf("%lu\n", strlcat(dest5,src5,9));
	printf("%s\n\n",dest5);


	char dest[30] = "123";
	char *src = "456789";
	printf("%u\n", ft_strlcat(dest,src,7));
	printf("%s\n",dest);

	char dest1[30] = "123";
	char *src1 = "456789";
	printf("%u\n", ft_strlcat(dest1,src1,3));
	printf("%s\n",dest1);

	char src4[] = "saysomthing";
	char dest4[10] = "goods";
	printf("%u\n", ft_strlcat(dest4,src4,9));
	printf("%s\n",dest4);


}


// size < dest 문자열 붙이는 과정 사라지고
// size > dest 일경우 size-1만큼 src붙이고 '\0' 대입후 리턴값은 dest길이 + src
