/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 18:06:14 by ghanh             #+#    #+#             */
/*   Updated: 2021/01/23 21:03:41 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_numboralph(char *str)
{
	int i;

	i = 0;
	if ((str[i] >= 'A' && str[i] <= 'Z') ||
		(str[i] >= 'a' && str[i] <= 'z') ||
		(str[i] >= '0' && str[i] <= '9'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	if (str[i] >= 'A' && str[i] <= 'Z')
	{
		str[i] += 32;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_numboralph(&str[i]) == 1)
		{
			if (i == 0 || ft_numboralph(&str[i - 1]) == 0)
			{
				ft_strupcase(&str[i]);
			}
			else
			{
				ft_strlowcase(&str[i]);
			}
		}
		i++;
	}
	return (str);
}
