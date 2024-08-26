/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-quei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:22:12 by dde-quei          #+#    #+#             */
/*   Updated: 2024/08/19 18:13:25 by dde-quei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}

/*int main(void)
{
	int a = 18;
	printf ("\n\n\t1 = Primo\n");
	printf ("\t*******\n");
	printf ("\t  ***\n");
	printf ("\t   *\n");
	printf ("\t   %d\n", ft_find_next_prime (a));
	printf ("\t   *\n");
	printf ("\t  ***\n");
	printf ("\t*******\n");
        printf ("\t*******\n");
        printf ("\t  ***\n");
        printf ("\t   *\n");
        printf ("\t   %d\n", ft_find_next_prime (a));
        printf ("\t   *\n");
        printf ("\t  ***\n");
        printf ("\t*******\n");
}*/
