/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 17:33:58 by moeisa            #+#    #+#             */
/*   Updated: 2022/07/31 17:37:51 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A') || (str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}

// int		main(void)
// {
// 	char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// 	char *p_lwr;
// 	p_lwr = uppercase;

// 	char special[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_";
// 	char *p_spe;
// 	p_spe = special;

// 	char empty[] = "";
// 	char *p_emp;
// 	p_emp = empty;

// 	printf("%s = %d\n", uppercase, ft_str_is_uppercase(p_lwr));
// 	printf("%s = %d\n", special, ft_str_is_uppercase(p_spe));
// 	printf("Empty = %d\n", ft_str_is_uppercase(p_emp));

// 	return (0);
// }
