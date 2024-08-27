/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-quei <dde-quei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:15:47 by dde-quei          #+#    #+#             */
/*   Updated: 2024/08/08 14:23:45 by dde-quei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int main()
{
	int x;
	int y;
	x = 10;
	y = 5;
	int	div;
	int	mod;

	ft_div_mod(x, y, &div, &mod);
	printf("\n--------------------------------");
	printf("\nthe division of %d with %d = %d\n", x, y, div);
	printf("end");
	printf("\nthe remainder is %d\n", mod);
	printf("----------------------------------\n\n");
	return 0;
} */