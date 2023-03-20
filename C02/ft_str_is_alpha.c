/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 12:56:14 by moeisa            #+#    #+#             */
/*   Updated: 2022/07/31 13:31:51 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A') || (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}

// int		main(void)
// {
// 	char alpha[] = "ABCabc";
// 	char *p_alp;
// 	p_alp = alpha;

// 	char special[] = "ABC abc \'\"(){}[]!?@#$&*";
// 	char *p_spe;
// 	p_spe = special;

// 	char empty[] = "";
// 	char *p_emp;
// 	p_emp = empty;

// 	printf("%s = %d\n", alpha, ft_str_is_alpha(p_alp));
// 	printf("%s = %d\n", special, ft_str_is_alpha(p_spe));
// 	printf("Empty = %d\n", ft_str_is_alpha(p_emp));

// 	return (0);
// }
