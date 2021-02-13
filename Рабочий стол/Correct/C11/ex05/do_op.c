/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 16:46:45 by ghanh             #+#    #+#             */
/*   Updated: 2021/02/04 12:37:47 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

int		ft_charint(char *str, int i, int n, int count)
{
	int		j;
	int		num;

	j = i - n;
	num = 0;
	while (j < i)
	{
		num *= 10;
		num += str[j] - '0';
		j++;
	}
	if ((count % 2) > 0)
		num = -num;
	return (num);
}

int		ft_atoi(char *str)
{
	int		i;
	int		n;
	int		count;

	i = 0;
	n = 0;
	count = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n++;
		i++;
	}
	return (ft_charint(str, i, n, count));
}

void	result(char *numb, int i, char *numb2)
{
	int		a;
	int		b;
	void	(*operations[5])(int, int);

	operations[0] = &ft_add;
	operations[1] = &ft_minus;
	operations[2] = &ft_mult;
	operations[3] = &ft_del;
	operations[4] = &ft_modul;
	a = ft_atoi(numb);
	b = ft_atoi(numb2);
	operations[i](a, b);
}

int		main(int agm, char **agc)
{
	char	oper[5];
	int		i;

	oper[0] = '+';
	oper[1] = '-';
	oper[2] = '*';
	oper[3] = '/';
	oper[4] = '%';
	if (agm != 4)
		return (0);
	if ((agc[2][0] != '+' && agc[2][0] != '-' && agc[2][0] != '/' &&
			agc[2][0] != '%' && agc[2][0] != '*') || agc[2][1] != '\0')
	{
		write(1, "0\n", 2);
		return (0);
	}
	i = 0;
	while (agc[2][0] != oper[i])
		i++;
	result(agc[1], i, agc[3]);
	write(1, "\n", 1);
	return (0);
}
