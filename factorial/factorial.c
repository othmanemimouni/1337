/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   factorial.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmimoun <otmimoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 22:25:04 by otmimoun          #+#    #+#             */
/*   Updated: 2026/08/09 22:25:05 by otmimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// factorial(n) is n * factorial(n - 1), with factorial(0) equal to 1.
// A negative n is an invalid reading: return -1.
int	factorial(int n)
{
	(void)n;
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}

/*
int	main(void)
{
	printf("%d\n", factorial(5));
	printf("%d\n", factorial(-3));
	printf("%d\n", factorial(0));
	return (0);
}
*/