/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-quei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:23:04 by dde-quei          #+#    #+#             */
/*   Updated: 2024/08/17 14:56:33 by dde-quei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	res;
	int	sig;

	res = 0;
	sig = 1;
	while ((*str == ' ') || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sig *= -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (sig * res);
}

/*int main(void)
{
	char	str1[] = "---+--+1234ab567";
	char	str2[] = "123";

	printf("\n%d\n", ft_atoi(str1));
	printf("\n%d\n", ft_atoi(str2));
}*/
