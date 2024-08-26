/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-quei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:04:16 by dde-quei          #+#    #+#             */
/*   Updated: 2024/08/19 14:47:27 by dde-quei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	a;
	long	num;	

	num = nb;
	if (num <= 0)
		return (0);
	else if (num == 1)
		return (1);
	else if (num >= 2)
	{
		a = 2;
		while (a * a <= num)
		{
			if (a * a == num)
				return (a);
			a++;
		}
	}
	return (0);
}

/*int main(void)
{
	long	nb = 259564321;

	printf ("\n\nA Raiz de %ld =\t** %d **\n\n", nb, ft_sqrt(nb));
}*/
