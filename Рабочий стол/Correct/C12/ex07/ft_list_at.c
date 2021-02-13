/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 15:27:33 by ghanh             #+#    #+#             */
/*   Updated: 2021/02/04 20:42:56 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*help;

	help = begin_list;
	i = 0;
	while (help)
	{
		if (i == nbr)
			return (help);
		help = help->next;
		i++;
	}
	return (NULL);
}
