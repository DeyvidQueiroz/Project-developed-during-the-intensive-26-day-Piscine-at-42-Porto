/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-quei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 05:08:50 by dde-quei          #+#    #+#             */
/*   Updated: 2024/08/11 10:18:14 by dde-quei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)

{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main()
{	
	printf("\n\n%d\n\n", ft_str_is_numeric("123"));
	printf("\n\n%d\n\n", ft_str_is_numeric("he110Word"));
	printf("\n\n%d\n\n", ft_str_is_numeric("@#$"));
	printf("\n\n%d\n\n", ft_str_is_numeric(""));
	return 0;
}*/
