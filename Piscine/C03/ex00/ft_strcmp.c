/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-quei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:50:56 by dde-quei          #+#    #+#             */
/*   Updated: 2024/08/13 18:17:56 by dde-quei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int main(void)
{
	char	s1[] = "hello";
	char	s2[] = "hello";
	char	s3[] = "helo";

	printf ("\ncomparison of equals %d", ft_strcmp(s1, s2));
	printf ("\ncomparison of the different %d", ft_strcmp(s1, s3));
}*/
