int	ft_str_is_alpha(char *str)
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
		if ((str[i] < 'a' || str[i] > 'z')
			&& (str[i] < 'A' || str[i] > 'Z'))
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
    i = ft_str_is_alpha("Hola");
    
    printf("%d", i);
    return 0;
}*/
