/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 17:29:37 by ghanh             #+#    #+#             */
/*   Updated: 2021/01/23 21:41:11 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int i;
	int counter;

	counter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] < 127)
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
