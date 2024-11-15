/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncheniou <ncheniou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:29:36 by ncheniou          #+#    #+#             */
/*   Updated: 2024/11/14 18:47:59 by ncheniou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	aux;

	aux = 0;
	while (src[aux] != '\0' && aux < n)
	{
		dest[aux] = src[aux];
		aux ++;
	}
	while (aux < n)
	{
		dest[aux] = '\0';
		aux ++;
	}
	return (dest);
}
/*
int main()
{
    int n;
    n = 8;
    char src[] = "Hola caracola pesicola!";
    char dest[50];
    
    ft_strncpy(dest, src, n);
    printf("%s", dest);
    return 0;
}
#include <stdio.h>
#include <string.h>
*/
