/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 20:10:52 by moeisa            #+#    #+#             */
/*   Updated: 2022/07/31 20:50:50 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 123) && (str[i] > 96))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

// int		main(void)
// {
// 	char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
// 	char *p_lwr;
// 	p_lwr = lowercase;

// 	char allcases[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
// 	char *p_all;
// 	p_all = allcases;

// 	printf("%s = ", lowercase);
// 	printf("%s\n", ft_strupcase(p_lwr));
// 	printf("%s = ", allcases);
// 	printf("%s\n", ft_strupcase(p_all));
// }
