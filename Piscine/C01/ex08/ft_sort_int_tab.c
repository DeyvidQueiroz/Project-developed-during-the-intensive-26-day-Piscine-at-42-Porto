/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-quei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 02:08:05 by dde-quei          #+#    #+#             */
/*   Updated: 2024/08/11 03:48:11 by dde-quei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	p;
	int	i;

	i = 0;
	while (i < size)
	{
		p = 0;
		while (p < size)
		{
			if (*(tab + p) > *(tab + i))
			{
				temp = *(tab + p);
				*(tab + p) = *(tab + i);
				*(tab + i) = temp;
			}
			p++;
		}
		i++;
	}
}

/*int main()
{
	int	array[] = {9, 1, 2, 0,  5, 4 ,3, 0 ,6};
	int	size;
	size = sizeof(array) / sizeof(array[0]);

	ft_sort_int_tab(array, size);

	
	int i;
	i = 0;
	while (i < size)
	{
		printf("%d, ", array[i]);
		i++;
	}

	return 0;
}*/
