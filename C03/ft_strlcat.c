/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 21:23:08 by moeisa            #+#    #+#             */
/*   Updated: 2022/08/02 22:03:23 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	length_src;
	unsigned int	length_dest;

	length_dest = ft_strlen(dest);
	length_src = ft_strlen(src);
	j = length_dest;
	i = 0;
	if (size == 0 || size < length_dest)
		return (size + length_src);
	while (src[i] != '\0' && j < size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (length_src + length_dest);
}

// int		main(void)
// {
// 	char dest[100] = "123";
// 	char src[100] = "4567890";
// 	unsigned int size = 6;
// 	unsigned int result;

// 	printf("-----\ndest = %s\nsrc = %s\nnb = %d\n\n", dest, src, size);
// 	result = ft_strlcat(dest, src, size);
// 	printf("dest (cat) = %s\n src = %s\n 
// result = %d-----\n", dest, src, result);

// 	return (0);
// }
