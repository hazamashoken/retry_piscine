/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 03:32:53 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/06 03:56:12 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = -1;
	j = -1;
	while (dest[++i])
		;
	while (src[++j])
		;
	j += i;
	while (*src && size - i - 1)
		dest[i++] = *src++;
	dest[i] = 0;
	return (j);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char dest[30] = "hello world";
// 	char dest2[30] = "hello world";
// 	char *src = " its me";

// 	printf("%u\n", ft_strlcat(dest, src, 15));
// 	printf("%s\n", dest);

// 	printf("%lu\n", strlcat(dest2, src, 15));
// 	printf("%s\n", dest2);

// 	printf("%u\n", ft_strlcat(dest, src, 20));
// 	printf("%s\n", dest);

// 	printf("%lu\n", strlcat(dest2, src, 20));
// 	printf("%s\n", dest2);

// 	printf("%u\n", ft_strlcat(dest, src, 30));
// 	printf("%s\n", dest);

// 	printf("%lu\n", strlcat(dest2, src, 30));
// 	printf("%s\n", dest2);
// }
