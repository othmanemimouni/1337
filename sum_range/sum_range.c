/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_range.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmimoun <otmimoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 15:02:22 by otmimoun          #+#    #+#             */
/*   Updated: 2026/08/14 15:02:23 by otmimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The range is half-open: add the integers from first up to last,
// last excluded.
// first equal to last means an empty range, whose sum is 0.
int	sum_range(const int *first, const int *last)
{
	long long	total;
	const int	*p = first;

	total = 0;
	while (p < last)
	{
		total += *p;
		p++;
	}
	return (total);
}
