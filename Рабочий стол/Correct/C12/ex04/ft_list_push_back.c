/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 15:53:20 by ghanh             #+#    #+#             */
/*   Updated: 2021/02/04 15:12:01 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *last;

	last = *begin_list;
	if (last)
	{
		while (last->next)
			last = last->next;
		last->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
