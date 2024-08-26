/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-quei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 23:16:50 by dde-quei          #+#    #+#             */
/*   Updated: 2024/08/18 23:37:31 by dde-quei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	res;

	res = 1;
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	res *= ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (res);
}

/*int main(void)
{
	printf ("\n\n\t  *\n\t* %d *\n\t  *\n\n", ft_fibonacci(8));
}*/
