/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-quei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 15:25:18 by dde-quei          #+#    #+#             */
/*   Updated: 2024/08/11 15:58:10 by dde-quei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char	*str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (!(str[i] <= 126 && str[i] >= 32))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main()
{
	printf("\n\n%d\n\n", ft_str_is_printable("\n"));
	printf("\n\n%d\n\n", ft_str_is_printable("HELO"));
	printf("\n\n%d\n\n", ft_str_is_printable("helloWord"));
	printf("\n\n%d\n\n", ft_str_is_printable(""));
	return 0;
}*/
