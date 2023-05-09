/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex10.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:24:56 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/06 03:09:43 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// If the return value is >= dstsize, the output string has been truncated.
// It is the caller's responsibility to handle this.

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	if (!size)
		return (0x0);
	i = -1;
	while (src[++i])
		;
	while (*src && --size)
		*dest++ = *src++;
	*dest = 0x0;
	return (i);
}

// #include <stdlib.h>
// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "Hello world";
// 	char tostr[12];

// 	printf("%d\n",ft_strlcpy(tostr, str, 12));
// 	printf("%s\n", tostr);

// 	printf("%lu\n",strlcpy(tostr, str, 12));
// 	printf("%s\n", tostr);
// }
