/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 21:21:42 by moeisa            #+#    #+#             */
/*   Updated: 2022/08/03 20:40:17 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	c;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[c + i] = src[i];
		i++;
	}
	dest[c + i] = '\0';
	return (dest);
}

// int		main(void)
// {
// 	char dest[20] = "123";
// 	char src[] = "4567890";
// 	unsigned int nb = 2;

// 	printf("-----\ndest = %s\nsrc = %s\nnb = %d\n", dest, src, nb);
// 	ft_strncat(dest, src, nb);
// 	printf("result = %s\n-----\n", dest);

// 	return (0);
// }
