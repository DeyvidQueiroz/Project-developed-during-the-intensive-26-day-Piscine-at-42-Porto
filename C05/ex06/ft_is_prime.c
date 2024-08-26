/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-quei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:52:22 by dde-quei          #+#    #+#             */
/*   Updated: 2024/08/19 16:47:26 by dde-quei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		i += 1;
	}
	return (1);
}

/*int main(void)
{
	printf ("\n\n\t1 = Primo\n");
	printf ("\t*******\n");
	printf ("\t  ***\n");
	printf ("\t   *\n");
	printf ("\t   %d\n", ft_is_prime(17));
	printf ("\t   *\n");
	printf ("\t  ***\n");
	printf ("\t*******\n");
}*/
