/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheniou <ncheniou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:38:44 by naimcheniou       #+#    #+#             */
/*   Updated: 2024/11/14 13:57:00 by ncheniou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++ i;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
    char src[] = "Hola caracola pesicola!";
    char dest[50];
    
    ft_strcpy(dest, src);
    printf("%s", dest);
    return 0;
}
*/