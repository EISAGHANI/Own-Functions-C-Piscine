/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:33:09 by moeisa            #+#    #+#             */
/*   Updated: 2022/07/27 17:42:31 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_nums(char a, char b, char c, char d)
{
	if (a == '9' && b == '8' && c == '9' && d == '9')
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
	}
	else
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
		ft_putchar(',');
	}
}

void	ft_nums2(char a, char b, char c, char d)
{
	if (b < d && c >= a)
	{
		ft_nums(a, b, c, d);
	}
}

void	ft_print_comb2(void)
{
	int	numbrs[4];

	numbrs[0] = '0';
	while (numbrs[0] <= '9')
	{
		numbrs[1] = '0';
		while (numbrs[1] <= '9')
		{
			numbrs[2] = '0';
			while (numbrs[2] <= '9')
			{
				numbrs[3] = '0';
				while (numbrs[3] <= '9')
				{
					ft_nums2(numbrs[0], numbrs[1], numbrs[2], numbrs[3]);
					numbrs[3]++;
				}
				numbrs[2]++;
			}
			numbrs[1]++;
		}
		numbrs[0]++;
	}
}
