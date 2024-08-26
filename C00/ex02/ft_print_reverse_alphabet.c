/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-quei <dde-quei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:19:12 by dde-quei          #+#    #+#             */
/*   Updated: 2024/08/08 20:15:55 by dde-quei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alpha;

	alpha = 'z';
	while ('a' <= alpha)
	{
		write(1, &alpha, 1);
		alpha--;
	}
}

/* int main ()
{
	printf("\n");
	ft_print_reverse_alphabet();
	printf("\n\n");
}  */
