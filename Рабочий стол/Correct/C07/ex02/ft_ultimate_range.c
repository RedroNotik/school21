/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 16:12:32 by ghanh             #+#    #+#             */
/*   Updated: 2021/01/29 20:45:07 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;
	int len;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	if (len < 0)
		return (-1);
	tab = (int*)malloc(sizeof(tab) * len);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}
