/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmimoun <otmimoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 09:03:00 by otmimoun          #+#    #+#             */
/*   Updated: 2026/08/10 09:03:01 by otmimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	if (ac != 2)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}
	i = 0;
	while (av[1][i])
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		write(1, &av[1][i], 1);
		i--;
	}
	write(1, "\n", 1);
	return (0);
}
