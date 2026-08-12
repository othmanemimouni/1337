/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flip_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmimoun <otmimoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 20:11:50 by otmimoun          #+#    #+#             */
/*   Updated: 2026/08/11 20:11:51 by otmimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int		i;
	char	c;

	i = 0;
	if (ac != 2)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}
	while (av[1][i] != '\0')
	{
		c = av[1][i];
		if (c >= 'a' && c <= 'z')
		{
			c -= 32;
		}
		else if (c >= 'A' && c <= 'Z')
		{
			c += 32;
		}
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
