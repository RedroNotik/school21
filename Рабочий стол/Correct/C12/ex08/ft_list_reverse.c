/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 16:05:05 by ghanh             #+#    #+#             */
/*   Updated: 2021/02/05 19:05:58 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*current;
	t_list	*nexts;
	t_list	*prev;

	current = *begin_list;
	if (!(current) || (current->next == NULL))
		return ;
	nexts = NULL;
	prev = NULL;
	while (current)
	{
		nexts = current->next;
		current->next = prev;
		prev = current;
		current = nexts;
	}
	*begin_list = prev;
}
