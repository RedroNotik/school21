/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 15:27:05 by ghanh             #+#    #+#             */
/*   Updated: 2021/02/03 15:03:12 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int i;
	int help;

	i = 1;
	help = 0;
	while (i < lenght)
	{
		if (f(tab[i - 1], tab[i]) == 0)
			i++;
		else if (f(tab[i - 1], tab[i]) < 0)
		{
			if (help > 0)
				return (0);
			help = -1;
			i++;
		}
		else
		{
			if (help < 0)
				return (0);
			help = 1;
			i++;
		}
	}
	return (1);
}
