/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghanh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 11:18:28 by ghanh             #+#    #+#             */
/*   Updated: 2021/01/27 19:48:16 by ghanh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **agm)
{
	int i;

	i = 0;
	(void)argc;
	while (agm[0][i])
		i++;
	write(1, agm[0], i);
	write(1, "\n", 1);
	return (0);
}
