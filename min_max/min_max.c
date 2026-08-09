/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_ max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmimoun <otmimoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 18:27:31 by otmimoun          #+#    #+#             */
/*   Updated: 2026/08/09 18:27:32 by otmimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				max;

	if (len == 0)
	{
		return (0);
	}
	max = tab[0];
	i = 1;
	while (i < len)
	{
		if (tab[i] > max)
		{
			max = tab[i];
		}
		i++;
	}
	return (max);
}

int	min(int *tab, unsigned int len)
{
	unsigned int	i;
	int				min;

	if (len == 0)
	{
		return (0);
	}
	min = tab[0];
	i = 1;
	while (i < len)
	{
		if (tab[i] < min)
		{
			min = tab[i];
		}
		i++;
	}
	return (min);
}

/*
int	main(void)
{
	int	myarrays[] = {3, 4, 5, 9, 33, 42, 12, 70};

	printf("Max Val = %d\n", max(myarrays, 8));
	printf("Min Val= %d\n", min(myarrays, 8));
	return (0);
}
*/