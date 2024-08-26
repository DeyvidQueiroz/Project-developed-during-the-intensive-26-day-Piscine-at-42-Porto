/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-quei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:37:18 by dde-quei          #+#    #+#             */
/*   Updated: 2024/08/18 18:05:53 by dde-quei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb > 1)
	{
		res *= nb * ft_recursive_factorial(nb - 1);
	}
	else if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (res);
}

/*int main(void)
{
	printf ("%i", ft_recursive_factorial(5));
}*/
