/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-quei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 10:29:20 by dde-quei          #+#    #+#             */
/*   Updated: 2024/08/11 13:49:19 by dde-quei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main()
{	
	printf("\n\n%d\n\n", ft_str_is_lowercase("123"));
	printf("\n\n%d\n\n", ft_str_is_lowercase("helloWord"));
	printf("\n\n%d\n\n", ft_str_is_lowercase("helloword"));
	printf("\n\n%d\n\n", ft_str_is_lowercase(""));
	return 0;
}*/
