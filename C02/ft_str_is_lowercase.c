/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:24:10 by moeisa            #+#    #+#             */
/*   Updated: 2022/07/31 17:32:58 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a') || (str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}

// int		main(void)
// {
// 	char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
// 	char *p_lwr;
// 	p_lwr = lowercase;

// 	char special[] = "abcdefghijklmnopqrstuvwxyz_";
// 	char *p_spe;
// 	p_spe = special;

// 	char empty[] = "";
// 	char *p_emp;
// 	p_emp = empty;

// 	printf("%s = %d\n", lowercase, ft_str_is_lowercase(p_lwr));
// 	printf("%s = %d\n", special, ft_str_is_lowercase(p_spe));
// 	printf("Empty = %d\n", ft_str_is_lowercase(p_emp));

// 	return (0);
// }
