/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 20:52:26 by moeisa            #+#    #+#             */
/*   Updated: 2022/07/31 20:57:06 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 64) && (str[i] < 91))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

// int		main(void)
// {
// 	char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// 	char *upr;
// 	upr = uppercase;

// 	char allcases[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
// 	char *p_all;
// 	p_all = allcases;

// 	printf("%s = ", uppercase);
// 	printf("%s\n", ft_strlowcase(upr));
// 	printf("%s = ", allcases);
// 	printf("%s\n", ft_strlowcase(p_all));
// }
