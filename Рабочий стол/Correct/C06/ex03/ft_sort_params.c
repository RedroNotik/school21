/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 14:11:20 by ghanh             #+#    #+#             */
/*   Updated: 2021/01/28 14:19:16 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) == *(s2 + i))
		i++;
	return (*(s1 + i) - *(s2 + i));
}

void	ft_swap(char **a, char **b)
{
	char *help;

	help = *a;
	*a = *b;
	*b = help;
}

void	output(int nbr, char **agm)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < nbr)
	{
		while (agm[i][j])
			j++;
		write(1, agm[i], j);
		write(1, "\n", 1);
		j = 0;
		i++;
	}
}

int		main(int nbr, char **agm)
{
	int i;
	int j;

	i = 1;
	while (i < nbr)
	{
		j = i + 1;
		while (j < nbr)
		{
			if (ft_strcmp(agm[i], agm[j]) > 0)
				ft_swap(&agm[i], &agm[j]);
			j++;
		}
		i++;
	}
	output(nbr, agm);
}
