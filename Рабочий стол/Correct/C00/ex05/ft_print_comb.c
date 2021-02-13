/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 18:15:10 by ghanh             #+#    #+#             */
/*   Updated: 2021/01/21 18:15:15 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char numbers[3];

	numbers[0] = '0';
	while (numbers[0] <= '7')
	{
		numbers[1] = numbers[0];
		while (numbers[1] <= '8')
		{
			numbers[2] = numbers[1];
			while (numbers[2] <= '9')
			{
				if (numbers[0] != numbers[1] && numbers[1] != numbers[2])
				{
					write(1, numbers, 3);
					if (numbers[0] != '7')
					{
						write(1, ", ", 2);
					}
				}
				numbers[2]++;
			}
			numbers[1]++;
		}
		numbers[0]++;
	}
}
