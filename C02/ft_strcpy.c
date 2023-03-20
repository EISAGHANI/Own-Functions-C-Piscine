/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeisa <moeisa@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 11:47:26 by moeisa            #+#    #+#             */
/*   Updated: 2022/07/31 12:54:53 by moeisa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int		main(void)
// {
// 	char source[] = "Source string.";
// 	char destin[] = "Destination string.";
// 	char *dest;

// 	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", source, destin);

//     dest = ft_strcpy(destin, source);

// 	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", source, dest);
// 	return (0);
// }
