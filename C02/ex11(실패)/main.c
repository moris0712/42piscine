void ft_putstr_non_printable(char *str);

int main ()
{
	char a[] = "Coucou\ntu vas bien ?";
	char b[] = {11, 12, 13 ,14 ,15 ,127,250, '\0'};
	ft_putstr_non_printable(a);
	ft_putstr_non_printable(b);
}
