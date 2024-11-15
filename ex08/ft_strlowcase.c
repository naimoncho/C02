/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheniou <ncheniou@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:49:10 by ncheniou          #+#    #+#             */
/*   Updated: 2024/11/15 12:54:09 by ncheniou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
