/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiscine <spiscine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 03:27:33 by spiscine          #+#    #+#             */
/*   Updated: 2023/05/08 21:25:07 by spiscine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex04.h"
#include <stdlib.h>
#include <stdio.h>

static int	ft_strlen(char *str)
{
	int	len;

	len = -1;
	while (str[++len])
		;
	return (len);
}

char	*ft_strdup(char *str)
{
	char	*ret;
	int		i;

	i = 0;
	ret = malloc(ft_strlen(str));
	if (!ret)
		return (NULL);
	while (*str)
		ret[i++] = *str++;
	ret[i] = 0;
	return (ret);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*ret;

	i = 0;
	ret = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!ret)
		return (NULL);
	while (ac--)
	{
		ret[i].size = ft_strlen(av[i]);
		ret[i].str = av[i];
		ret[i].copy = ft_strdup(av[i]);
		if (!ret[i].copy)
		{
			while (i--)
				free(ret[i].copy);
			return (NULL);
		}
		i++;
	}
	ret[i].str = 0;
	return (ret);
}
