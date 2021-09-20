
void	*ft_print_memory(void *addr, unsigned int size);

int     main(void)
{
	int i;

	char str[] = "Bonjour les amiseeeeeee\n\
	eeeeeeeedwadwadawdadwadwegfrsdhgrtdhtrdh\
	arewfwafwafeawfwFAWFAGAWGRESHSERHEStrgesg\
	resgrtdhtyjreeeeeeeeeeeeeeeeeeeeeeeeeeeeee\
	eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee";
	i = 150;
	ft_print_memory(str, i);
}
