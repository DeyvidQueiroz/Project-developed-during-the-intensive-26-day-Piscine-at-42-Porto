/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-quei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 20:19:50 by dde-quei          #+#    #+#             */
/*   Updated: 2024/08/13 13:43:21 by dde-quei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ifs(char *str, int i, int *changes)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		if (*changes)
			str[i] -= 32;
		*changes = 0;
	}
	else if (str[i] >= 'A' && str[i] <= 'Z')
	{
		if (!*changes)
			str[i] += 32;
		*changes = 0;
	}
	else if (!(str[i] >= '0' && str[i] <= '9'))
	{
		*changes = 1;
	}
	else if (str[i] >= '0' && str[i] <= '9')
	{
		*changes = 0;
	}
}

char	*ft_strcapitalize(char	*str)
{
	int	i;
	int	changes;

	i = 0;
	changes = 1;
	while (str[i] != '\0')
	{
		ifs(str, i, &changes);
		i++;
	}
	return (str);
}

int main(void)
{
	char	str[] ="ola,tudo bem? 42palavra quarenta-e-duas; cinquenta+e+um";
	char	cpt[] ="ativiDade do cAPACETE";

	ft_strcapitalize(str);
	printf ("%s\n", str);
	printf ("%s", ft_strcapitalize(cpt));
}
