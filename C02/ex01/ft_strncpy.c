/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-quei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 21:01:40 by dde-quei          #+#    #+#             */
/*   Updated: 2024/08/11 13:45:12 by dde-quei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*(src + i) != '\0' && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}

/*int main()
{
	char	dest[12];
	char	orig[12] = "Hello world";
	unsigned int	cont = 6;

	ft_strncpy(dest, orig, cont);
	printf ("\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n\n");
	printf ("the origin and %s", orig);
	printf ("\nthe destination is \"%s\"", dest);
	printf ("\n\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*\n\n");
}*/
