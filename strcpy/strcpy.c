/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmimoun <otmimoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 09:07:35 by otmimoun          #+#    #+#             */
/*   Updated: 2026/08/10 09:07:36 by otmimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*
int	main(void)
{
	char s1[] = "Hello Geeks!";
	char s2[20] = "GfG";
	char s3[40];

	// Copy contents of s1 to s2 using strcpy
	strcpy(s2, s1);

	// Copy a constant string into s3
	strcpy(s3, "Copy successful");

	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("s3: %s", s3);

	return (0);
}
*/