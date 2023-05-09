/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 03:28:02 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/06 03:46:58 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (!to_find)
		return (str);
	i = 0;
	while (*str)
	{
		while (str[i] == to_find[i])
		{
			i++;
		}
		if (to_find[i] == 0)
			return (str);
		str++;
		i = 0;
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "hello worl its world me";
// 	char	find[] = "world";

// 	printf("%s\n", ft_strstr(str, find));
// 	printf("%s\n", strstr(str, find));
// }
