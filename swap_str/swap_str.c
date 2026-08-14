/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmimoun <otmimoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 14:55:38 by otmimoun          #+#    #+#             */
/*   Updated: 2026/08/14 14:55:41 by otmimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// Exchange the pointer stored in *a with the one stored in *b.
// Nothing happens when a or b is NULL.
void	swap_str(char **a, char **b)
{
	char	*swap;

	if (!a || !b)
		return ;
	swap = *(a);
	*(a) = *(b);
	*(b) = swap;
}
