char	*ft_strcapitalize(char *str)
{
	int		i;
	int		word;

	i = 0;
	word = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && word == 1)
			str[i] -= 32;
		if (str[i] >= 'A' && str[i] <= 'Z' && !word)
			str[i] += 32;
		if ((str[i] < '0' || (str[i] > '9' && str[i] < 'A'))
			|| ((str[i] > 'Z' && str[i] < 'a') || str[i] > 'z'))
			word = 1;
		else
			word = 0;
		i ++;
	}
	return (str);
}
/*
int main()
{
    char str[] = "salut, coMMent tu vas ? 42mots quarante-deux; cinquante+et+un";
     ft_strcapitalize(str);
    printf("%s", str);
    return 0;
}
*/
