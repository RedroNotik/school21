/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 15:55:19 by ghanh             #+#    #+#             */
/*   Updated: 2021/01/26 16:41:56 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int st;

	st = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	while (power > 1)
	{
		nb *= st;
		power--;
	}
	return (nb);
}
