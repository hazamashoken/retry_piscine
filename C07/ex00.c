/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 05:59:35 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/07 06:03:10 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*ret;

	i = 0;
	while (src[i++])
		;
	ret = (char *)malloc(i);
	if (!ret)
		return (NULL);
	i = -1;
	while (src[++i])
		ret[i] = src[i];
	ret[i] = 0;
	return (ret);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*ptr;

// 	ptr = ft_strdup("hello world\n");

// 	printf("%s", ptr);
// }
