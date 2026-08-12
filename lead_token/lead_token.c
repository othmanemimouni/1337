/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lead_token.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmimoun <otmimoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 14:00:52 by otmimoun          #+#    #+#             */
/*   Updated: 2026/08/12 14:00:53 by otmimoun         ###   ########.fr       */
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
	while (av[1][i] == ' ' || av[1][i] == '\t')
	{
		i++;
	}
	c = av[1][i];
	while (c != '\0' && c != ' ' && c != '\t')
	{
		write(1, &c, 1);
		i++;
		c = av[1][i];
	}
	write(1, "\n", 1);
	return (0);
}
