/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 14:57:20 by ghanh             #+#    #+#             */
/*   Updated: 2021/02/04 20:46:07 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int			i;
	t_list		*help;

	help = begin_list;
	i = 0;
	while (help)
	{
		i++;
		help = help->next;
	}
	return (i);
}
