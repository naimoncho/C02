char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i ++;
	}
	return (str);
}
/*
int main()
{
    char str[] = "HolA coCAcola miAU";
     ft_strupcase(str);
    printf("%s", str);
    return 0;
}
*/
