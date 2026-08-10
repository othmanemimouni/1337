/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_guard.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmimoun <otmimoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 09:43:02 by otmimoun          #+#    #+#             */
/*   Updated: 2026/08/10 09:43:03 by otmimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	at_or_default(const int *a, size_t n, long i, int fallback)
{
	if (i < 0 || (size_t)i >= n)
		return (fallback);
	return (a[i]);
}

// at_or_default returns a[i] when i is a valid index of a, and fallback when it
// is not. This builds without a single diagnostic
//  and still reads out of bounds.