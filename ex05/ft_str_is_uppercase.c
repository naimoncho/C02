/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheniou <ncheniou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:11:37 by ncheniou          #+#    #+#             */
/*   Updated: 2024/11/15 12:40:34 by ncheniou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
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
		if (str[i] < 'A' || str[i] > 'Z')
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
    i = ft_str_is_uppercase("gr1'39rurrighhg");
    
    printf("%d", i);
    return 0;
}
*/
