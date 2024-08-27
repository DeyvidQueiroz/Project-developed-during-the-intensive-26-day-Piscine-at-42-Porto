/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-quei <dde-quei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 08:59:04 by dde-quei          #+#    #+#             */
/*   Updated: 2024/08/08 10:23:21 by dde-quei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h> */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/* int main()
{
	int x;
	int y;
	x = 4;
	y = 2;

	ft_swap(&x, &y);
	printf("\nvalor de x = %d e valor de y =%d\n\n", x, y);
	return 0;
} */