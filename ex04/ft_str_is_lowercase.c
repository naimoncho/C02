int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!str[0])
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			count ++;
		}
		i ++;
	}
	if (count > 0)
		return (0);
	else
	{
		return (1);
	}
}
/*
int main()
{
    int i;
    i = ft_str_is_lowercase("gr1'39rurrighhg");
    
    printf("%d", i);
    return 0;
}
*/
