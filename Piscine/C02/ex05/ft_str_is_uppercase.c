/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-quei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 14:19:23 by dde-quei          #+#    #+#             */
/*   Updated: 2024/08/11 14:54:17 by dde-quei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main()
{	
	printf("\n\n%d\n\n", ft_str_is_uppercase("123"));
	printf("\n\n%d\n\n",  ft_str_is_uppercase("HELO"));
	printf("\n\n%d\n\n",   ft_str_is_uppercase("helloWord"));
	printf("\n\n%d\n\n",ft_str_is_uppercase(""));
	return 0;
}*/
