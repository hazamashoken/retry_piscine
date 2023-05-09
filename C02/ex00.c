/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 21:49:05 by tliangso          #+#    #+#             */
/*   Updated: 2023/05/06 03:09:09 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	if (!dest)
		return (0x0);
	if (src == 0x0)
		return (0x0);
	i = -1;
	while (src[++i])
		;
	while (*src)
		*dest++ = *src++;
	*dest = 0;
	return (dest - i);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main()
// {
// 	char *test = "HELLO";
// 	char *str = calloc(strlen(test) + 1, sizeof(char));

// 	printf("result is = %s\n", ft_strcpy(str , test));
// 	printf("result is = %s\n", str);
// 	printf("result is = %s\n", strcpy(str , test));
// 	printf("result is = %s\n", str);
// }
