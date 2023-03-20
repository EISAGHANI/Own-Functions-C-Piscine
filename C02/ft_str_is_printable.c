/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 19:10:50 by moeisa            #+#    #+#             */
/*   Updated: 2022/07/31 19:29:15 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32) || (str[i] > 126))
			return (0);
		i++;
	}
	return (1);
}

// int		main(void)
// {
// 	char string[] = "Normal characters string";
// 	char *p_str;
// 	p_str = string;

// 	char unpr[] = "Unprintables: \t (tab), \a (?)";
// 	char *p_unp;
// 	p_unp = unpr;

// 	char empty[] = "";
// 	char *p_emp;
// 	p_emp = empty;

// 	printf("%s = %d\n", string, ft_str_is_printable(p_str));
// 	printf("%s = %d\n", unpr, ft_str_is_printable(p_unp));
// 	printf("Empty = %d\n", ft_str_is_printable(p_emp));

// 	return (0);
// }
