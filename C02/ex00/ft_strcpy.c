/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-quei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 19:26:20 by dde-quei          #+#    #+#             */
/*   Updated: 2024/08/10 20:20:19 by dde-quei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

/*int main()
{
	char	dest[15];
	char	orig[15] = "hello world";

	ft_strcpy(dest, orig);
	printf ("\n*_*_*_*_*_*_*\n\n");
	printf ("\n%s", orig);
	printf ("\n%s", dest);
	printf ("\n\n*_*_*_*_*_*_*\n");

	return 0;
}*/
