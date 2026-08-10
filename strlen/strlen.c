/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmimoun <otmimoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 09:18:47 by otmimoun          #+#    #+#             */
/*   Updated: 2026/08/10 09:18:48 by otmimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/*
int	main(void)
{
	char	greeting[] = "Hello";
	size_t	length;

	// Calculate length
	length = strlen(greeting);
	printf("The string: '%s'\n", greeting);
	printf("Length via strlen(): %zu\n", length);
	printf("Allocated size via sizeof(): %zu\n", sizeof(greeting));
	return (0);
}
*/