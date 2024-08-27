/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-quei <dde-quei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:27:38 by dde-quei          #+#    #+#             */
/*   Updated: 2024/08/08 20:10:21 by dde-quei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/* int main()
{
	int x;
	int y;

	x = 2;
	y = 2;

	ft_ultimate_div_mod( &x, &y);
	printf("\n........................................");
	printf("\nDivision is \"%d\" and the remainder is \"%d\"\n", x, y);
	printf("..........................................\n");
	return 0;
} */