/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-quei <dde-quei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 23:09:02 by dde-quei          #+#    #+#             */
/*   Updated: 2024/08/11 11:53:42 by dde-quei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		i++;
		size--;
	}
}

/*int main(void)
{
	int	tab[] = {-2, 1 , 2 , 3 , 4 , 5 , 6 , 8 , 9};
	int	size;
	size = sizeof(tab) / sizeof(tab[0]);

	ft_rev_int_tab(tab, size);

	
	int i;
	i = 0;
	while (i != size)
	{
		printf("%d", tab[i]);
		i++;
	}

}*/
