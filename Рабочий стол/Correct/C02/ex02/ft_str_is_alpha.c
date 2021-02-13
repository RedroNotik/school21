/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 16:24:39 by ghanh             #+#    #+#             */
/*   Updated: 2021/01/23 17:28:32 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int i;
	int counter;

	counter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			counter++;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			counter++;
		}
		i++;
	}
	if (counter == i)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
