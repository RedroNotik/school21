/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 14:39:11 by ghanh             #+#    #+#             */
/*   Updated: 2021/02/02 18:35:30 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int lenght, int (*f)(int))
{
	int i;
	int *map;

	map = malloc(sizeof(int) * (lenght));
	i = 0;
	while (i < lenght)
	{
		map[i] = f(tab[i]);
		i++;
	}
	return (map);
}
