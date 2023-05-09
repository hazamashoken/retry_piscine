/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 03:20:43 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/06 03:45:02 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while ((*s1 || *s2) && n--)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf(">>%d\n", ft_strncmp("hello world", "hello", 5));
// 	printf(">>%d\n", strncmp("hello world", "hello", 5));

// 	printf(">>%d\n", ft_strncmp("hello world", "hello", 6));
// 	printf(">>%d\n", strncmp("hello world", "hello", 6));
// }
