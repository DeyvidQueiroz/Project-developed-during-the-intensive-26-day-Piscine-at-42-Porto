/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-quei <dde-quei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 20:23:58 by dde-quei          #+#    #+#             */
/*   Updated: 2024/08/08 21:43:04 by dde-quei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str ++;
	}
}

/* int main()
{
	char	str[5] = "Hello World";
	ft_putstr(str);
	return 0;
}
 */
