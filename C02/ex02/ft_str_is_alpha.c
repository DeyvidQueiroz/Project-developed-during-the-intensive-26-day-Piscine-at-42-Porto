/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-quei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 22:26:38 by dde-quei          #+#    #+#             */
/*   Updated: 2024/08/10 23:58:15 by dde-quei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main()
{	
	printf("\n\n%d\n\n", ft_str_is_alpha("helloWord"));
	printf("\n\n%d\n\n", ft_str_is_alpha("he110Word"));
	printf("\n\n%d\n\n", ft_str_is_alpha("hell*w*rd"));
	printf("\n\n%d\n\n", ft_str_is_alpha(""));
	return 0;
}
