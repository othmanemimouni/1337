/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmimoun <otmimoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 21:21:31 by otmimoun          #+#    #+#             */
/*   Updated: 2026/08/09 21:21:32 by otmimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

/*
int	main(void)
{
	printf("%d", isalpha('a'));
	printf("%d\n", isalpha('@'));
	printf("%d\n", isalpha('7'));
	printf("%d\n", isalpha('Z'));
	return (0);
}
*/