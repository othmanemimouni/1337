/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pair.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmimoun <otmimoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 08:26:01 by otmimoun          #+#    #+#             */
/*   Updated: 2026/08/10 08:26:03 by otmimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

// Print the count and the total on one line, separated by a single space.
// The specifiers below both claim an int. The compiler will tell you otherwise.
void	print_pair(size_t count, long total)
{
	printf("%zu %ld\n", count, total);
}
