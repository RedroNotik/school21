/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 16:48:55 by ghanh             #+#    #+#             */
/*   Updated: 2021/02/04 15:21:32 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*head;
	t_list	*current;
	int		i;

	i = 0;
	head = NULL;
	while (i < size)
	{
		current = head;
		head = ft_create_elem(strs[i]);
		head->next = current;
		i++;
	}
	return (head);
}
