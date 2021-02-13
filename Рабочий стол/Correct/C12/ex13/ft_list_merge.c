/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 21:44:54 by ghanh             #+#    #+#             */
/*   Updated: 2021/02/04 22:44:51 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *a;

	if (*begin_list1 == 0)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	a = *begin_list1;
	while (a->next)
		a = a->next;
	a->next = begin_list2;
}
