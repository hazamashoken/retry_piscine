/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 03:26:03 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/06 03:46:48 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*tmp;

	tmp = dest;
	while (*dest)
		dest++;
	while (*src && nb--)
		*dest++ = *src++;
	*dest = 0;
	return (tmp);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char dest[25] = "hello world";
// 	char dest2[25] = "hello world";
// 	char *src = " its me";

// 	printf("%s\n", ft_strncat(dest, src, 10));
// 	printf("%s\n", dest);

// 	printf("%s\n", strncat(dest2, src, 10));
// 	printf("%s\n", dest);

// 	printf("%s\n", ft_strncat(dest, src, 3));
// 	printf("%s\n", dest);

// 	printf("%s\n", strncat(dest2, src, 3));
// 	printf("%s\n", dest);
// }
