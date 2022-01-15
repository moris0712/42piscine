#include "libft.h"

#include <stdio.h>
#include <ctype.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
#include <fcntl.h>
int main(){

	// printf("%d\n", ft_isalpha('a'));
	// printf("%d\n", ft_isalpha('A'));
	// printf("%d\n", ft_isalpha('.'));
	// printf("%d\n", ft_isalpha(' '));
	// printf("%d\n", ft_isalpha(103));

	// printf("\n");

	// printf("%d\n", isalpha('a'));
	// printf("%d\n", isalpha('A'));
	// printf("%d\n", isalpha('.'));
	// printf("%d\n", isalpha(' '));
	// printf("%d\n", isalpha(103));

	// printf("%d\n", ft_isdigit('a'));
	// printf("%d\n", ft_isdigit('A'));
	// printf("%d\n", ft_isdigit('9'));
	// printf("%d\n", ft_isdigit(' '));
	// printf("%d\n", ft_isdigit(103));

	// printf("\n");

	// printf("%d\n", isdigit('a'));
	// printf("%d\n", isdigit('A'));
	// printf("%d\n", isdigit('9'));
	// printf("%d\n", isdigit(' '));
	// printf("%d\n", isdigit(103));

	// printf("%d\n", ft_isalnum('a'));
	// printf("%d\n", ft_isalnum('A'));
	// printf("%d\n", ft_isalnum('9'));
	// printf("%d\n", ft_isalnum(' '));
	// printf("%d\n", ft_isalnum(103));

	// printf("\n");

	// printf("%d\n", isalnum('a'));
	// printf("%d\n", isalnum('A'));
	// printf("%d\n", isalnum('9'));
	// printf("%d\n", isalnum(' '));
	// printf("%d\n", isalnum(103));

	// printf("%d\n", ft_isascii('a'));
	// printf("%d\n", ft_isascii('A'));
	// printf("%d\n", ft_isascii(127));
	// printf("%d\n", ft_isascii(128));
	// printf("%d\n", ft_isascii(270));

	// printf("\n");

	// printf("%d\n", isascii('a'));
	// printf("%d\n", isascii('A'));
	// printf("%d\n", isascii(127));
	// printf("%d\n", isascii(128));
	// printf("%d\n", isascii(270));

	// printf("%d\n", ft_isprint('a'));
	// printf("%d\n", ft_isprint('A'));
	// printf("%d\n", ft_isprint(39));
	// printf("%d\n", ft_isprint(127));
	// printf("%d\n", ft_isprint(270));

	// printf("\n");

	// printf("%d\n", isprint('a'));
	// printf("%d\n", isprint('A'));
	// printf("%d\n", isprint(39));
	// printf("%d\n", isprint(127));
	// printf("%d\n", isprint(270));

	// printf("%zu\n", ft_strlen("abc"));
	// printf("%zu\n", ft_strlen(" "));
	// printf("%zu\n", ft_strlen(""));

	// printf("\n");

	// printf("%lu\n", strlen("abc"));
	// printf("%lu\n", strlen(" "));
	// printf("%lu\n", strlen(""));

	// char str[] = "abcdefghijk";
	// ft_memset(str, 'z', 5);
	// printf("%s\n",str);
	// char str1[] = " ";
	// ft_memset(str1, 'a', 1);
	// printf("%s\n",str1);
	// char str2[10] = " ";
	// ft_memset(str2, 'a', 5);
	// printf("%s\n",str2);

	// printf("\n");

	// char str3[] = "abcdefghijk";
	// memset(str3, 'z', 5);
	// printf("%s\n",str3);
	// char str4[] = " ";
	// memset(str4, 'a', 1);
	// printf("%s\n",str4);
	// char str5[10] = " ";
	// memset(str5, 'a', 5);
	// printf("%s\n",str5);

	// char str6[20] = "abcdefghijk";
	// ft_bzero(str6, 5);
	// for(int i=0; i<20; i++)
	// 	printf("%d ",str6[i]);
	// printf("\n");

	// char str7[5] = " ";
	// ft_bzero(str7, 4);
	// for(int i=0; i<5; i++)
	// 	printf("%d ",str7[i]);
	// printf("\n");

	// printf("\n");

	// char str8[20] = "abcdefghijk";
	// bzero(str8, 5);
	// for(int i=0; i<20; i++)
	// 	printf("%d ",str8[i]);
	// printf("\n");

	// char str9[5] = " ";
	// bzero(str9, 4);
	// for(int i=0; i<5; i++)
	// 	printf("%d ",str9[i]);
	// printf("\n");


	// char str10[] = "abcdefghijk";
	// char str11[] = "zzzzz";
	// ft_memcpy(str10, str11, 3);
	// int i = 0;
	// while(str10[i])
	// 	printf("%d ",str10[i++]);
	// printf("\n");

	// char str12[] = "abcdefghijk";
	// char str13[] = "zzzzz";
	// ft_memcpy(str12, str13, 8);
	// i = 0;
	// while(str12[i])
	// 	printf("%d ",str13[i++]);
	// printf("\n");

	// printf("\n");

	// char str14[] = "abcdefghijk";
	// char str15[] = "zzzzz";
	// memcpy(str14, str15, 3);
	// i = 0;
	// while(str14[i])
	// 	printf("%d ",str14[i++]);
	// printf("\n");

	// char str16[] = "abcdefghijk";
	// char str17[] = "zzzzz";
	// ft_memcpy(str16, str17, 8);
	// i = 0;
	// while(str16[i])
	// 	printf("%d ",str16[i++]);
	// printf("\n");

	// printf("\n");

	// char str18[] = "ABCDEF";
	// char str19[] = "abcdef";
	// memmove(str18, str19, 3);
	// printf("%s \n", str18);

	// char str20[] = "ABCDEF";
	// char str21[] = "abcdef";
	// ft_memmove(str20, str21, 3);
	// printf("%s \n", str20);

	// printf("\n");


	// char str22[] = "ABCDEFGHI";
	// char str23[] = "QQQQQQQQQ";
	// printf("%zu \n",ft_strlcpy(str22, str23, 4));
	// printf("str: %s \n", str22);

	// char bbb22[] = "ABCDEFGHI";
	// char bbb23[] = "QQQQ";
	// printf("%zu \n",ft_strlcpy(bbb22, bbb23, 8));
	// printf("str: %s \n", bbb22);


	// char aaa22[] = "ABCDEFGHI";
	// char aaa23[] = "QQQQQQQQQ";
	// printf("%zu \n",ft_strlcpy(aaa22, aaa23, 0));
	// printf("str: %s \n", aaa22);

	// printf("\n");

	// char str24[] = "ABCDEFGHI";
	// char str25[] = "QQQQQQQQQ";
	// printf("%zu \n", strlcpy(str24, str25, 4));
	// printf("str: %s \n", str24);

	// char bbb24[] = "ABCDEFGHI";
	// char bbb25[] = "QQQQ";
	// printf("%zu \n", strlcpy(bbb24, bbb25, 8));
	// printf("str: %s \n", bbb24);

	// char aaa24[] = "ABCDEFGHI";
	// char aaa25[] = "QQQQQQQQQ";
	// printf("%zu \n",strlcpy(aaa24, aaa25, 0));
	// printf("str: %s \n", aaa24);



	// char dest1[30] = "123";
	// char *src1 = "456789";
	// printf("%zu\n", ft_strlcat(dest1,src1,20));
	// printf("dest = %s\n", dest1);
	// printf("src = %s\n", src1);
	// printf("\n");
	// char dest2[30] = "123";
	// char *src2 = "456789";
	// printf("%zu\n", ft_strlcat(dest2,src2,7));
	// printf("dest = %s\n", dest2);
	// printf("src = %s\n", src2);
	// printf("\n");
	// char dest3[30] = "12345";
	// char *src3 = "456789";
	// printf("%zu\n", ft_strlcat(dest3,src3,4));
	// printf("dest = %s\n", dest3);
	// printf("src = %s\n", src3);
	// printf("\n");
	// char dest7[30] = "123";
	// char *src7 = "456789";
	// printf("%lu\n", ft_strlcat(dest7,src7,0));
	// printf("dest = %s\n", dest7);
	// printf("src = %s\n", src7);
	// printf("\n");


	// printf("\n");
	// char dest4[30] = "123";
	// char *src4 = "456789";
	// printf("%lu\n", strlcat(dest4,src4,20));
	// printf("dest = %s\n", dest4);
	// printf("src = %s\n", src4);
	// printf("\n");
	// char dest5[30] = "123";
	// char *src5 = "456789";
	// printf("%lu\n", strlcat(dest5,src5,7));
	// printf("dest = %s\n", dest5);
	// printf("src = %s\n", src5);
	// printf("\n");
	// char dest6[30] = "12345";
	// char *src6 = "456789";
	// printf("%lu\n", strlcat(dest6,src6,4));
	// printf("dest = %s\n", dest6);
	// printf("src = %s\n", src6);
	// printf("\n");
	// char dest8[30] = "123";
	// char *src8 = "456789";
	// printf("%zu\n", strlcat(dest8,src8,0));
	// printf("dest = %s\n", dest8);
	// printf("src = %s\n", src8);
	// printf("\n");






	// printf("%d\n", ft_toupper('a'));
	// printf("%d\n", ft_toupper('A'));
	// printf("%d\n", ft_toupper('-'));

	// printf("\n");

	// printf("%d\n", toupper('a'));
	// printf("%d\n", toupper('A'));
	// printf("%d\n", toupper('-'));


	// printf("%d\n", ft_tolower('a'));
	// printf("%d\n", ft_tolower('A'));
	// printf("%d\n", ft_tolower('-'));

	// printf("\n");

	// printf("%d\n", tolower('a'));
	// printf("%d\n", tolower('A'));
	// printf("%d\n", tolower('-'));

	// char str26[] = "ABCDEFGHIJK";

	// printf("%s\n", ft_strchr(str26, 'Z'));
	// printf("%s\n", ft_strchr(str26, 'H'));
	// printf("%s\n", ft_strchr(str26, 'K'));
	// printf("%s\n", ft_strchr(str26, 0));
	// printf("\n");
	// printf("%s\n", strchr(str26, 'Z'));
	// printf("%s\n", strchr(str26, 'H'));
	// printf("%s\n", strchr(str26, 'K'));
	// printf("%s\n", strchr(str26, 0));
	// printf("\n");

	// char str27[] = "BKBKBK";

	// printf("%s\n", ft_strrchr(str27, 'Z'));
	// printf("%s\n", ft_strrchr(str27, 'B'));
	// printf("%s\n", ft_strrchr(str27, 'K'));
	// printf("%s\n", ft_strrchr(str27, 0));
	// printf("\n");
	// printf("%s\n", strrchr(str27, 'Z'));
	// printf("%s\n", strrchr(str27, 'B'));
	// printf("%s\n", strrchr(str27, 'K'));
	// printf("%s\n", strrchr(str27, 0));

	// // char str28[] = "abcde";
	// // char str29[] = "ab";
	// char str28[] = {1, 2, 0, 0, 0 ,0};
	// char str29[] = {1, 2, 0, 0 ,1 ,0};


	// char str30[] = "abcdf";
	// char str31[] = "abcde";

	// printf("%d\n", ft_strncmp(str28, str29, 6));
	// printf("%d\n", ft_strncmp(str28, str30, 10));
	// printf("%d\n", ft_strncmp(str30, str28, 10));
	// printf("%d\n", ft_strncmp(str28, str30, 4));
	// printf("%d\n", ft_strncmp(str28, str31, 5));

	// printf("\n");

	// printf("%d\n", strncmp(str28, str29, 6));
	// printf("%d\n", strncmp(str28, str30, 10));
	// printf("%d\n", strncmp(str30, str28, 10));
	// printf("%d\n", strncmp(str28, str30, 4));
	// printf("%d\n", strncmp(str28, str31, 5));
	// printf("\n");

	// char str32[] = "ABCDE";
	// char temp[] = "";

	// printf("\n");
	// printf("%s\n", ft_memchr(str32, 67, 1));
	// printf("%s\n", ft_memchr(str32, 67, 3));
	// printf("%s\n", ft_memchr(str32, 67, 5));
	// printf("%s\n", ft_memchr(str32, 70, 0));
	// printf("%s\n", ft_memchr(temp, 70, 5));
	// printf("\n");

	// printf("%s\n", memchr(str32, 67, 1));
	// printf("%s\n", memchr(str32, 67, 3));
	// printf("%s\n", memchr(str32, 67, 5));
	// printf("%s\n", memchr(str32, 70, 0));
	// printf("%s\n", memchr(temp, 70, 5));
	// printf("\n");

	// char str33[] = "ABCDE";
	// char str34[] = "ABCDh";
	// char str33[] = {1, 2, 0, 0, 0 ,0};
	// char str34[] = {1, 2, 0, 0 ,5 ,0};

	// printf("%d\n", ft_memcmp(str33, str34, 1));
	// printf("%d\n", ft_memcmp(str33, str34, 3));
	// printf("%d\n", ft_memcmp(str33, str34, 5));
	// printf("%d\n", ft_memcmp(str33, str34, 7));
	// printf("\n");
	// printf("%d\n", memcmp(str33, str34, 1));
	// printf("%d\n", memcmp(str33, str34, 3));
	// printf("%d\n", memcmp(str33, str34, 5));
	// printf("%d\n", memcmp(str33, str34, 7));


	// char str35[] = "ABCDE";
	// char str36[] = "CD";
	// char str37[] = "";
	// char str38[] = "NN";
	// printf("%s\n", ft_strnstr(str35, str36, 4));
	// printf("%s\n", ft_strnstr(str35, str37, 4));
	// printf("%s\n", ft_strnstr(str35, str38, 10));
	// printf("%s\n", ft_strnstr(str37, str38, 4));
	// printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	// printf("\n");
	// printf("%s\n", strnstr(str35, str36, 4));
	// printf("%s\n", strnstr(str35, str37, 4));
	// printf("%s\n", strnstr(str35, str38, 10));
	// printf("%s\n", strnstr(str37, str38, 4));
	// printf("%s\n", strnstr("lorem ipsum dolor sit amet", "dolor", 15));



	// printf("1 %d\n", ft_atoi("  -+2135   "));
	// printf("2 %d\n", ft_atoi(""));
	// printf("3 %d\n", ft_atoi("546:5"));
	// printf("4 %d\n", ft_atoi("\n\n\n  -46\b9 \n5d6"));
	// printf("5 %d\n", ft_atoi("-47-5"));
	// printf("6 %d\n", ft_atoi("\e475"));

	// printf("\n");
	// printf("1 %d\n", atoi("  -+2135   "));
	// printf("2 %d\n", atoi(""));
	// printf("3 %d\n", atoi("546:5"));
	// printf("4 %d\n", atoi("\n\n\n  -46\b9 \n5d6"));
	// printf("5 %d\n", atoi("-47-5"));
	// printf("6 %d\n", atoi("\e475"));

	// char *aa = calloc(5, 4);
	// for (int i=0; i<5; i++)
	// {
	// 	printf(" %d ",aa[i]);
	// }
	// printf(" \n");
	// char *bb = ft_calloc(5, 4);
	// for (int i=0; i<5; i++)
	// {
	// 	printf(" %d ",bb[i]);
	// }

	// char str39[] = "abcdefghijk";
	// printf("%s\n", ft_substr(str39, 3, 5));
	// char str40[] = "Hello, 42Seoul!";
	// printf("%s\n", ft_substr(str40, 7, 2));
	// char str41[] = "Hello, 42Seoul!";
	// printf("%s\n", ft_substr(str41, 20, 2));
	// printf(" \n");

	// char str42[] = "";
	// char str43[] = "";
	// printf("%s\n", ft_strjoin(str42, str43));
	// printf(" \n");


	// printf("%s\n", ft_strtrim("abqbc", "abc"));
	// printf("%s\n", ft_strtrim("xavocadoyz", "xyz"));
	// printf("%s\n", ft_strtrim("xavocadoyz", ""));
	// printf("%s\n", ft_strtrim("", "abc"));
	// printf("%s\n", ft_strtrim("abc", "abc"));
	// printf("%s\n", ft_strtrim("abc123c4ab", "abc"));
	

	// char **str44;
	// str44 = ft_split("12  225    3321  ", ' ');
	// for(int i=0; i<3; i++)
	// 	printf("%s\n", str44[i]);
	// printf("\n");

	// char **str45;
	// str45 = ft_split("  12  225    3321  ", ' ');
	// for(int i=0; i<3; i++)
	// 	printf("%s\n", str45[i]);
	// printf("\n");

	// char **str46;
	// str46 = ft_split("          ", ' ');
	// for(int i=0; i<1; i++)
	// 	printf("%s\n", str46[i]);
	// printf("\n");

	// ft_split("  134  23    3", ' ');
	// ft_split("11  22    33", ' ');



	// printf("%s\n", ft_itoa(0));
	// printf("%s\n", ft_itoa(9));
	// printf("%s\n", ft_itoa(-15300));
	// printf("%s\n", ft_itoa(-2147483648LL));
	// printf("%s\n", ft_itoa(2147483647));
	
	t_list *list1=ft_lstnew((void*)1);
	t_list *list2=ft_lstnew((void*)2);
	t_list *list3=ft_lstnew((void*)3);
	t_list *list4=ft_lstnew((void*)4);
	t_list *list5=ft_lstnew((void*)5);
	t_list *list6=ft_lstnew((void*)6);
	t_list *list7=ft_lstnew((void*)7);

	list1->next = list2;
	list2->next = list3;
	list3->next = list4;
	list4->next = list5;

	//ft_lstadd_front(&list1, NULL); // new가 null이면 추가 안함

	// ft_lstadd_back(&list1, list6); // tmp list에다 저장하는이유는 마지막 포인터로 이동한걸 다시 처음으로 돌려주기위함
	// ft_lstadd_back(&list1, list7); 


	int i=0;
	while(list1->next)
	{
		printf("%d ", (int )list1->content);
		list1 = list1->next;
		i++;
	}

}