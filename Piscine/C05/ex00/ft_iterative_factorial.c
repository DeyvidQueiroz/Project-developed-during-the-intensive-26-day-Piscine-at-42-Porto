/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-quei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:51:28 by dde-quei          #+#    #+#             */
/*   Updated: 2024/08/18 16:13:47 by dde-quei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	res;

	res = 1;
	while (nb > 1)
	{
		res *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (res);
}

/*int main(void)
{

	printf ("%i", ft_iterative_factorial(3));
}*/
