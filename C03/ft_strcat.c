/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 21:21:02 by moeisa            #+#    #+#             */
/*   Updated: 2022/08/02 11:12:52 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	length1;
	int	length2;
	int	i;

	length1 = 0;
	while (dest[length1] != '\0')
	{
		length1++;
	}
	length2 = 0;
	while (src[length2] != '\0')
	{
		length2++;
	}
	i = 0;
	while (i <= length2)
	{
		dest[length1 + i] = src[i];
		i++;
	}
	return (dest);
}

// int		main(void)
// {
// 	char dest[40] = "Hello";
// 	char src[] = ", worldaaaa!";

// 	printf("-----\n dest = %s\n src = %s\n", dest, src);
// 	ft_strcat(dest, src);
// 	printf("result = %s\n-----\n", dest);

// 	return (0);
// }
