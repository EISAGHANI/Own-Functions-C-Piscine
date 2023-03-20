/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 11:35:24 by moeisa            #+#    #+#             */
/*   Updated: 2022/08/01 14:36:54 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	length;
	unsigned int	i;

	length = 0;
	while (src[length] != '\0')
		length++;
	if (size != 0)
	{
		i = 0;
		while ((src[i] != '\0') && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (length);
}

// int		main(void)
// {
// 	char src[] = "Source";
// 	char dest[100];
// 	unsigned int n;

// 	n = 2;

// 	printf("BEFORE\n\t src: %s\n\t des: %s\n\t size: %d\n", src, dest, n);

//     n = ft_strlcpy(dest, src, n);

// 	printf("AFTER\n\t src: %s\n\t des: %s\n\t size: %d\n", src, dest, n);
// 	return (0);
// }
