/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 17:49:28 by ghanh             #+#    #+#             */
/*   Updated: 2021/02/03 19:10:28 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>

void	ft_add(int a, int b)
{
	ft_putnbr(a + b);
}

void	ft_minus(int a, int b)
{
	ft_putnbr(a - b);
}

void	ft_mult(int a, int b)
{
	ft_putnbr(a * b);
}

void	ft_del(int a, int b)
{
	if (b == 0)
		write(2, "Stop : division by zero", 23);
	else
		ft_putnbr(a / b);
}

void	ft_modul(int a, int b)
{
	if (b == 0)
		write(2, "Stop : modulo by zero", 21);
	else
		ft_putnbr(a % b);
}
