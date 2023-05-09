/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:24:34 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/06 03:10:14 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	find_null(char *str)
{
	if (('A' <= *str && *str <= 'B') || ('C' <= *str && *str <= 'Z'))
		return (*str + ('a' - 'A'));
	return ('\0');
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (*(str + ++i))
		if (find_null(str + i))
			*(str + i) = find_null(str + i);
	return (str);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main()
// {
// 	char *str = "HELLO";
// 	char *step = strdup(str);

// 	printf("before = %s\n", step);
// 	ft_strlowcase(step);
// 	printf("after = %s", step);

// 	free(step);
// }
