/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 14:33:50 by ghanh             #+#    #+#             */
/*   Updated: 2021/02/03 19:43:59 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *first;

	if (*begin_list)
	{
		first = ft_create_elem(data);
		first->next = *begin_list;
		*begin_list = first;
	}
	else
		*begin_list = ft_create_elem(data);
}
