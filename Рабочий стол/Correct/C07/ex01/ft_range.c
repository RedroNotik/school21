/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 15:30:48 by ghanh             #+#    #+#             */
/*   Updated: 2021/01/30 12:07:47 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int				*mas;
	int				i;
	unsigned int	len;

	i = 0;
	if (min >= max)
		return (NULL);
	len = max - min;
	mas = (int*)malloc(sizeof(mas) * (len));
	while (min < max)
	{
		mas[i] = min;
		i++;
		min++;
	}
	return (mas);
}
