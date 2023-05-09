/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 21:57:38 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/06 03:09:15 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while (src[++i])
		;
	if (n < i)
		i = n;
	n = i;
	while (*src && i--)
		*dest++ = *src++;
	*dest = 0;
	return (dest - n);
}

// #include <stdlib.h>
// #include <string.h>

// int main()
// {
// 	char	*str = "helloe";
// 	char	*cpstr = calloc(strlen(str), sizeof(char));
// 	int		len = 7;

// 	printf("result is = %s\n", ft_strncpy(cpstr, str, len));
// 	printf("%s\n", cpstr);
// 	printf("result is = %s\n", strncpy(cpstr, str, len));
// 	printf("%s\n", cpstr);

// }
