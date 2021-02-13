/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 15:49:23 by ghanh             #+#    #+#             */
/*   Updated: 2021/02/03 18:40:45 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char			digit;
	int				pow_10;
	long long int	n;

	n = nb;
	if (n == 0)
		write(1, "0", 1);
	pow_10 = 1000000000;
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
	}
	while (n < pow_10)
		pow_10 /= 10;
	while (pow_10 > 0)
	{
		digit = '0' + n / pow_10;
		put_char(digit);
		n %= pow_10;
		pow_10 /= 10;
	}
}
