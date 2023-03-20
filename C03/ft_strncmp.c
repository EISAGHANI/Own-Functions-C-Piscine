/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 17:22:29 by moeisa            #+#    #+#             */
/*   Updated: 2022/08/01 18:54:04 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	result;

	i = 0;
	result = 0;
	while ((i < n) && !result && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		result = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	if (i < n && !result && (s1[i] == '\0' || s2[i] == '\0'))
		result = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (result);
}

// int main()
// {
// 	char s1[100] = "hellosdfkajsdfl";
// 	char s2[100] = "helLO";

// 	int n = 5;
// 	int re;

// 	re = ft_strncmp(s1, s2, n);

// 	printf("%d\n", re);
// }
