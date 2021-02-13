/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 16:07:22 by ghanh             #+#    #+#             */
/*   Updated: 2021/01/27 19:59:56 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb == 1)
		return (1);
	if (nb == -1)
	{
		if (power % 2 == 0)
			return (1);
		else
			return (-1);
	}
	if (power < 0)
		return (0);
	if (power == 0)
		nb = 1;
	else
		return (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}
