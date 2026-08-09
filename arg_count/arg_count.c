/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_count.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmimoun <otmimoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 21:03:28 by otmimoun          #+#    #+#             */
/*   Updated: 2026/08/09 21:03:29 by otmimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int n)
{
	char	c;

	if (n >= 10)
	{
		print_number(n / 10);
	}
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	(void)argv;
	print_number(argc - 1);
	write(1, "\n", 1);
	return (0);
}
