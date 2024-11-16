char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			(str[i] = str[i] - ('A' - 'a'));
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
