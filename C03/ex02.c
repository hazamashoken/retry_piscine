/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 03:22:08 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/06 03:56:40 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*tmp;

	tmp = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = 0;
	return (tmp);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char dest[20] = "hello world";
// 	char dest2[20] = "hello world";
// 	char *src = " its me";

// 	printf("%s\n", ft_strcat(dest, src));
// 	printf("%s\n", dest);

// 	printf("%s\n", strcat(dest2, src));
// 	printf("%s\n", dest2);
// }
