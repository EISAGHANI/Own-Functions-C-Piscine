/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 21:05:36 by moeisa            #+#    #+#             */
/*   Updated: 2022/08/03 12:18:06 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (str[c] != '\0')
	{
		if (i == 0 && (str[c] >= 'a' && str[c] <= 'z'))
		{
			str[c] -= 'a' - 'A';
			i++;
		}
		else if (i > 0 && (str[c] >= 'A' && str[c] <= 'Z'))
			str[c] += 'a' - 'A';
		else if ((str[c] < '0') || (str[c] > '9' && str[c] < 'A')
			|| (str[c] > 'Z' && str[c] < 'a') || (str[c] > 'z'))
			i = 0;
		else
			i++;
		c++;
	}
	return (str);
}

// int		main(void)
// {
// 	char str1[] = "salut, comment tu vas ? 
// 42mots quarante-deux; cinquante+et+un";

// 	char str2[] = " sALuT, ComMenT tu VAS ? 
// 42Mots QUarante-deUX; cinQuantE+ET+un";

// 	printf("BEF = %s", str1);
// 	printf("\nAFT = %s\n", ft_strcapitalize(str1));
// 	printf("\nBEF = %s", str2);
// 	printf("\nAFt = %s\n", ft_strcapitalize(str2));

// }
