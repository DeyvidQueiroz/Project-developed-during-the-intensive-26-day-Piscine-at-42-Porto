/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-quei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 22:36:48 by dde-quei          #+#    #+#             */
/*   Updated: 2024/08/18 23:06:36 by dde-quei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 0)
		res *= nb * ft_recursive_power(nb, power - 1);
	return (res);
}

/*int main(void)
{
	printf ("\n\n\t  *\n\t*%d*\n\t  *\n\n", ft_recursive_power(5, 3));
}*/
