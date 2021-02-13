/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 20:42:52 by ghanh             #+#    #+#             */
/*   Updated: 2021/01/23 15:58:21 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int help[size];
	int count;

	count = 0;
	while (size > 0)
	{
		help[count] = *(tab+size-1);
		count++;
		size--;
	}
	printf("%p", help);
	tab = help;
}
