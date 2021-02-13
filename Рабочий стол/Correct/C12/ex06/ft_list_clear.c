/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 19:44:27 by ghanh             #+#    #+#             */
/*   Updated: 2021/02/04 15:56:31 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *help;
	t_list *p;

	p = begin_list;
	while (p)
	{
		free_fct(p->data);
		help = p->next;
		free(p);
		p = help;
	}
}
