/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-quei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:21:31 by dde-quei          #+#    #+#             */
/*   Updated: 2024/08/13 19:49:42 by dde-quei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n -1)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int main(void)
{
	char	s1[] = "Hello World";
	char	s2[] = "Hell0 world";
	char	s3[] = "Hullywood";
	char    s4[] = "";
	unsigned int size = 4;

	printf ("\n%d", ft_strncmp(s1, s2, size));
	printf ("\n%d", ft_strncmp(s1, s3, size));
	printf ("\n%d", ft_strncmp(s1, s4, size));
}*/
