/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 12:11:17 by moeisa            #+#    #+#             */
/*   Updated: 2022/08/03 11:59:32 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}

// int		main(void)
// {
// 	char src[50] = "Source string.";
// 	char dest[100] = "";
// 	unsigned int n;

// 	n = 12;

// 	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", src, dest);

//     ft_strncpy(dest, src, n);

// 	printf("AFTER\n\t src: %s\n\t des: %s\n", src, dest);
// 	return (0);
// }
